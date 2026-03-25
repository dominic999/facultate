from typing import final
import numpy as np
from heapq import heappop, heappush, heapify
import matplotlib.pyplot as plt

class KnnClasisifier:
    def __init__ (self, train_images, train_labels):
        self.train_labels = train_labels
        self.train_images = train_images

    def classify_image (self, test_image, num_neigbors = 3, metric = 'l2'):
        h = []
        distance = []
        for i in range(len(self.train_images)):
            distance = 0
            if metric == 'l1':
                distance = np.sum(np.abs(self.train_images[i] - test_image))
            elif metric == 'l2':
                distance = np.sqrt(np.sum((self.train_images[i] - test_image) ** 2))
            h.append((distance, self.train_labels[i]))
        h.sort()
        
        final_class = np.array([], dtype=int)
        for i in range(num_neigbors):
            final_class = np.append(final_class, int(h[i][1])) 
        final_class = np.bincount(final_class)
        max_class = np.where( final_class == np.amax(final_class))
        return max_class[0][0]

        



num_bins = 11
train_images = np.loadtxt('data/train_images.txt') # incarcam imaginile
test_images = np.loadtxt('data/test_images.txt') # incarcam imaginile
train_labels = np.loadtxt('data/train_labels.txt') # incarcam imaginile
test_labels = np.loadtxt('data/test_labels.txt') # incarcam imaginile
clasificator = KnnClasisifier(train_images=train_images, train_labels=train_labels)
corecte_totale_l2 = []
corecte_totale_l1 = []
vecini = [1,3,5,7,9]


for j in vecini:
    corecte = 0
    for i in range(len(test_images)):
        clasa = clasificator.classify_image(test_image=test_images[i], num_neigbors=j, metric='l2')
        if clasa == test_labels[i]:
            corecte+=1
    corecte_totale_l2.append(corecte/len(test_images))

    corecte = 0
    for i in range(len(test_images)):
        clasa = clasificator.classify_image(test_image=test_images[i], num_neigbors=j, metric='l1')
        if clasa == test_labels[i]:
            corecte+=1
    corecte_totale_l1.append(corecte/len(test_images))

plt.plot(vecini, corecte_totale_l2)
plt.plot(vecini, corecte_totale_l1)
plt.xlabel("vecini")
plt.ylabel("corecte_totale")
plt.show()

# print(len(train_images))
