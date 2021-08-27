from picamera import PiCamera
from time import sleep

camera = PiCamera()
camera.rotation = 0

# camera.start_recording('/home/pi/Desktop/video.h264')
# sleep(5)
# camera.stop_recording()

camera.resolution = (2592, 1944)
camera.framerate = 20
sleep(2) #min: 2
camera.capture('/home/pi/Desktop/image_maxres.jpg')
