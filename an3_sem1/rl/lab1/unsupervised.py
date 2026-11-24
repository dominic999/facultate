from sklearn.cluster import KMeans
from sklearn.datasets import load_iris
from sklearn.decomposition import PCA
import matplotlib.pyplot as plt, numpy as np
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import adjusted_rand_score

data = load_iris()
x = data.data
x_scaled = StandardScaler().fit_transform(x)

# KMeans - clustering
km = KMeans(n_clusters=3, n_init=10, random_state=42).fit(x_scaled)
labels = km.labels_

# PCA - reduce numărul de componente
pca = PCA(n_components=2, random_state=42)
x_2pca = pca.fit_transform(x_scaled)

plt.figure()
plt.scatter(x_2pca[:, 0], x_2pca[:, 1], c=labels, s=40)
plt.title('KMeans clusters (PCA 2D)')
plt.show()

# Ce ar însemna ARI vs. true labels? Google it! Să aflăm împreună!
print('ARI vs. true labels:', adjusted_rand_score(data.target, labels))
