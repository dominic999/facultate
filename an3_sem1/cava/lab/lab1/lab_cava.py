# <h1><center>Laborator 1</center></h1>

# ### Importuri necesare

import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

# ### Citire si afisare imagine color

img = cv.imread("butterfly.jpeg")
cv.imshow("Fluture galben",img)
cv.waitKey(0)
cv.destroyAllWindows()

# ### Citire si afisare imagine gray

img = cv.imread("butterfly.jpeg",cv.IMREAD_GRAYSCALE)
cv.imshow("Fluture gray",img)
cv.waitKey(0)
cv.destroyAllWindows()

# ### Dimensiune imagine

H, W = img.shape
print(H,W)

# ### Redimensionare imagine

img = cv.resize(img,(100, 100))
H, W = img.shape
print(H,W)
cv.imshow("Fluture gray redimensionat",img)
cv.waitKey(0)
cv.destroyAllWindows()
