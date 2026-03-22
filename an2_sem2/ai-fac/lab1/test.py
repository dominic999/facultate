import numpy as np

# a) Citiți imaginile și salvați-le într-un np.array (9x400x600)
images = []
for idx in range(9):
    file_path = f"images/car_{idx}.npy"
    img = np.load(file_path)          # (400, 600)
    images.append(img)

all_images = np.stack(images, axis=0)  # (9, 400, 600)
print("Shape:", all_images.shape)

# b) Suma valorilor pixelilor tuturor imaginilor
total = np.sum(all_images)
print("Suma totala", total)

# c) Suma valorilor pixelilor pentru fiecare imagine în parte
suma_per_imagine = np.sum(all_images, axis=(1, 2))  
print("Suma per imagine:", suma_per_imagine)
