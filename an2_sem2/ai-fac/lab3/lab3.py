import numpy as np

class KnnClasisifier:
    def __init__ (self, train_images, train_labels):
        self.train_labels = train_labels
        self.train_images = train_images

    def classify_image (self, test_image, num_neigbors = 3, metric = 'l2'):


        distance = []
        for i in self.train_images:
            distance = 0
            if metric == 'l1':
                distance = np.sum(np.abs(self.train_images - test_image), axis=1)
            elif metric == 'l2':
                distance = np.sqrt(np.sum((self.train_images - test_image) ** 2, axis=1))


def values_to_bins(matrice_initiala, bins):
    x_to_bins = np.digitize(matrice_initiala, bins) 
    return x_to_bins

num_bins = 11
train_images = np.loadtxt('data/train_images.txt') # incarcam imaginile
test_images = np.loadtxt('data/test_images.txt') # incarcam imaginile
train_labels = np.loadtxt('train_labels.txt') # incarcam imaginile
test_labels = np.loadtxt('test_labels.txt') # incarcam imaginile
bins = np.linspace(start=0, stop=255, num=num_bins+1) # returneaza intervalele
train_disc = values_to_bins(train_images, bins)
test_disc = values_to_bins(test_images, bins)

print(len(train_images))
