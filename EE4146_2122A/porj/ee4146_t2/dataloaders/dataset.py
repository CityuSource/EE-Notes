# encoding: utf-8
"""
Read images and corresponding labels.
"""

import torch
from torch.utils.data import Dataset
from torchvision import transforms
import pandas as pd
import numpy as np
from PIL import Image
import os
import itertools
from torch.utils.data.sampler import Sampler

from PIL import ImageFile
ImageFile.LOAD_TRUNCATED_IMAGES = True


N_CLASSES = 6
CLASS_NAMES = ['buildings', 'forest', 'glacier', 'mountain', 'sea', 'street']

class Classification_Dataset(Dataset):
    def __init__(self, root_dir, csv_file, transform=None):
        """
        Args:
            data_dir: path to image directory.
            csv_file: path to the file containing images
                with corresponding labels.
            transform: optional transform to be applied on a sample.
        """
        super(Classification_Dataset, self).__init__()
        file = pd.read_csv(csv_file)

        self.root_dir = root_dir
        self.images = file['ID'].values  ## image name
        self.labels = file['label_id'].values.astype(int)
        self.labels = np.eye(N_CLASSES)[self.labels.reshape(-1)] ## one_hot labels
        self.transform = transform

        print('Total # images:{}, labels:{}'.format(len(self.images), len(self.labels)))

    def __getitem__(self, index):
        """
        Args:
            index: the index of item
        Returns:
            image and its labels
        """
        items = self.images[index]
        image_name = os.path.join(self.root_dir, str(self.images[index])+'.jpg')
        image = Image.open(image_name).convert('RGB')
        image = image.resize((128,128), Image.BICUBIC)
        label = self.labels[index]
        if self.transform is not None:
            image = self.transform(image)
        return image, torch.FloatTensor(label)

    def __len__(self):
        return len(self.images)