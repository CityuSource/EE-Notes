"""
Helper functions for image segmentation
"""
import numpy as np
def rgb2ycbcr(img):
    """
    It should work the same as Matlab's version
    img should be np.ndarray with dtype = uint8
    value range(img) = [0,255]
    """
    oriT = np.asarray([65.481, 128.553, 24.966, \
            -37.797, -74.203, 112, \
            112, -93.786, -18.214]).reshape((3,3),order='C')/255
    offset = [16, 128, 128]
    img = np.minimum(img, 255)
    resimg = np.zeros(img.shape,dtype=np.float64)
    for i in range(3):
        resimg[:,:,i] = img[:,:,0] * oriT[i,0] + img[:,:,1] * oriT[i,1] + \
          img[:,:,2] * oriT[i,2] + offset[i]
    resimg = np.round(resimg)
    return np.require(resimg,dtype=np.uint8)
   
def colorsegms(segm, img):
    """
    colorsegm - color a segmentation based on the image
    csegm = colorsegm(segm, img)
    segm = the segmentation image  [type = np.ndarray]
    img = the original image    [type = np.ndarray (or Image)]
    csegm = the colored segmentation -- each segment is colored based on the 
            average pixel color within the segment.
    """
    img = np.asarray(img).copy()
    if segm.shape[0:2] != img.shape[0:2]:
        raise Exception('The shape of segmentation and image are not consistent') 
    rimg, gimg, bimg = img[:,:,0], img[:,:,1], img[:,:,2]
    for i in range(1, np.int(max(segm.flatten())) + 1):
        # assume label starts from 1
        ind = (segm == i)
        rimg[ind] = np.mean(rimg[ind].flatten())
        gimg[ind] = np.mean(gimg[ind].flatten())
        bimg[ind] = np.mean(bimg[ind].flatten())
    return img

def getfeatures(img, stepsize, follow_matlab = True):
    """
    getfeatures - extract features from an image
     [X, L] = getfeatures(img, stepsize)
     INPUT
     img      - the image   [type = np.ndarray or Image]
     stepsize - window stepsize
     OUTPUT
      X   - the features: each column is a feature vector  [type = np.ndarray]
      L   - dictionary containing location information of each feature
    """
    winsize = 7 # ensure it is an odd number
    if stepsize > winsize:
        raise Exception('stepsize larger than window size')
    img = np.asarray(img)
    if img.dtype!= np.uint8 or len(img.shape) != 3:
        raise Exception('only uint8 image color are supported')
    yimg = np.require(rgb2ycbcr(img), dtype=np.float64)
    sy,sx, sc = img.shape
    offset = np.floor((winsize-1)/2)
    rangex = range(0, (sx-winsize+1) , stepsize)
    rangey = range(0, (sy-winsize+1) , stepsize)
    win_max = winsize 
    X = np.zeros((4, len(rangex) * len(rangey)), dtype=np.float64);
    i = 0
    # to compesate the fact that python is 0-index
    py2mat_constant = 1 if follow_matlab else 0
    for x in rangex:
        for y in rangey:
            myIu = yimg[y:y+win_max,x:x+win_max,1]
            myIv = yimg[y:y+win_max,x:x+win_max,2]
            X[:,i] = [np.mean(myIu.flatten()), \
                      np.mean(myIv.flatten()), \
                      y + offset + py2mat_constant, \
                      x + offset + py2mat_constant
                      ]
            i = i + 1 
    L = {'rangex':rangex, 'rangey':rangey, 'offset':offset, 'sx':sx, 'sy':sy, \
         'stepsize':stepsize, 'winsize':winsize, 'follow_matlab':follow_matlab}
    return X, L

def labels2seg(Y,L):
    """
    labels2segm - form a segmentation image using cluster labels
    segm = labels2segm(Y, L)
    Y - cluster labels for each location
    L - location dictionary from getfeatures
    segm - output segmentation image
    """
    segm = np.zeros((L['sy'], L['sx']))
    # <= offset if floor((winsize-1)/2)>= floor(stepsize/2) 
    rstep = np.int(np.floor(L['stepsize']/2.0)) 
    stepbox = range(-rstep, L['stepsize'] - rstep)
    rx = np.asarray(L['rangex'], dtype=np.int) + np.int(L['offset'])
    ry = np.asarray(L['rangey'], dtype=np.int) + np.int(L['offset'])
    Y_reshaped = Y.reshape((ry.size, rx.size),order='F')
    for i in stepbox:
        for j in stepbox:
            segm[np.ix_(ry + j, rx + i)] = Y_reshaped
    ## Now fil in the borders if they are missing
    minx = np.min(rx) + stepbox[0] - 1
    maxx = np.max(rx) + stepbox[-1] + 1
    miny = np.min(ry) + stepbox[0] - 1
    maxy = np.max(ry) + stepbox[-1] + 1

    if 0 <= minx:
        ## fill in left edge
        segm[:, 0:minx+1] = segm[:,minx+1].reshape((-1,1))
    if maxx < L['sx']:
        ## fill in right edge
        segm[:,maxx:] = segm[:,maxx-1].reshape((-1,1))
    if 0 < miny:
        ## fill in top edge
        segm[0:miny+1,:] = segm[miny+1,:].reshape((1,-1))
    if maxy < L['sy']:
        ## fill in bottom edge
        segm[maxy:,:] = segm[maxy-1,:].reshape((1,-1))
    return segm    
