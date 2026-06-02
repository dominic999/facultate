import numpy as np
from skimage import io

images = []
for i in range(9):
    image = np.load(f"images/car_{i}.npy")
    images.append(image)

s = 0
image_sum = []
final_image = np.zeros(images[0].shape)
for image in images:
    su = np.sum(image)
    final_image += image
    image_sum.append(su)
    s += su

final_image = final_image / 9


print(s)
print(image_sum)
print(image_sum.index(max(image_sum)))
io.imshow(final_image.astype(np.uint8))
io.show()
std = np.std(images)
print(std)

for i in range(len(images)):
    images[i] = (images[i] - final_image)
    images[i] = images[i] / std 
    io.imshow(images[i][200:300, 280:400].astype(np.uint8))
    io.show()



