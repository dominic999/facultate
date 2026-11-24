from parameters import *
import matplotlib.pyplot as plt
import random
import os
import numpy as np
import pdb
import timeit

def add_pieces_grid(params: Parameters):
    start_time = timeit.default_timer()
    img_mosaic = np.zeros(params.image_resized.shape, np.uint8)
    N, H, W, C = params.small_images.shape
    h, w, c = params.image_resized.shape
    num_pieces = params.num_pieces_vertical * params.num_pieces_horizontal

    if params.criterion == 'aleator':
        
        files = os.listdir(params.small_images_dir)
        for i in range(0, params.num_pieces_horizontal):
            # breakpoint()
            for j in range(0, params.num_pieces_vertical):
                curr_image_path = files[random.randint(0, len(files)-1)]
                curr_image = cv.imread(os.path.join(params.small_images_dir, 
                                                    curr_image_path))
                # print(img_mosaic[j * H: (j+1) * H, i *W: (i+1) * W].shape)
                img_mosaic[j * H: (j+1) * H, i *W: (i+1) * W] = curr_image

        #print('Building mosaic %.2f%%' % (100 * (i * params.num_pieces_horizontal + j + 1) / num_pieces))

    elif params.criterion == 'distantaCuloareMedie':
        mean_colors_small_images = params.small_images.mean(axis=(1,2))
        #print('Building mosaic %.2f%%' % (100 * (i * params.num_pieces_horizontal + j) / num_pieces))
        for i in range(0, params.num_pieces_horizontal):
            # breakpoint()
            for j in range(0, params.num_pieces_vertical):
                mean_curr_zone = params.image_resized[j * H: (j+1) * H,
                i * W: (i+1) * W].mean(axis = (0,1))
                distante_patrat = ((mean_colors_small_images - mean_curr_zone) \
                                   ** 2).sum(axis=(1))
                index = np.argmin(distante_patrat)
                img_mosaic[j * H: (j+1) * H, i * W: (i+1) * W] = \
                                params.small_images[index]


    else:
        print('Error! unknown option %s' % params.criterion)
        exit(-1)

    end_time = timeit.default_timer()
    print('Running time: %f s.' % (end_time - start_time))

    return img_mosaic


def add_pieces_random(params: Parameters):
    start_time = timeit.default_timer()


    n, h, w, c = params.small_images.shape
    H,W,C = params.image_resized.shape

    free_pixels = np.ones((H,W))
    mosaic_image = np.zeros((H+h, W+w, C), dtype=np.uint8)
    bigger_image = np.zeros((H+h, W+w, C))

    # cream aceasta imagine mai mare asftfel incat sa fim siguri
    # ca pana la final vom fi acoperit toti pixelii din imaginea intiiala
    bigger_image[:H, :W] = params.image_resized

    """
        aici indexam  toata matricea sa fie ceva de genu
        0 1 2
        3 4 5
        6 7 8
    """ 
    for i in range(free_pixels.shape[0]):
        for j in range(free_pixels.shape[1]):
            free_pixels[i,j] = i * free_pixels.shape[1] + j

    # aici spunem practic ca pixelii de pe margine, pe care i am adaugat in plus
    # nu sunt liberi
    free_pixels[H:] = -1
    free_pixels[:, W:] = -1

    #calculam mediile fiecarei imagini
    mean_colors_small_images = params.small_images.mean(axis=(1,2))

    while True:
        # o sa ramana cu indexii exacti din matrice care sunt liberi
        remaining_pixels = free_pixels[free_pixels > -1]
        if len(remaining_pixels) == 0:
            break

        index = random.randrange(len(remaining_pixels))
        row, col = divmod(remaining_pixels[index], free_pixels.shape[1])  # (1, 2)
        row = int(row)
        col = int(col)
        # print(f"row: {row}, col:{col}")

        patch = bigger_image[row:row+h, col:col+w]
        mean_color = patch.mean(axis=(0,1))

        distante_patrat = ((mean_color - mean_colors_small_images) ** 2).\
                                sum(axis=(1))
        selected_patch = params.small_images[np.argmin(distante_patrat)]
        # print(f"mosaic_shape: {mosaic_image[row: row+h, col:col+w].shape}\
                # selected_patch: {selected_patch.shape}")
        try:
            mosaic_image[row: row+h, col:col+w] =  selected_patch
        except Exception as e:
            breakpoint()
            print(e)
        free_pixels[row: row+h, col:col+w] = -1
    end_time = timeit.default_timer()
    print('running time:', (end_time - start_time), 's')
    return mosaic_image[:H, :W]


def add_pieces_hexagon(params: Parameters):
    start_time = timeit.default_timer()

    n,h,w,c = params.small_images.shape
    H,W,C = params.image_resized.shape

    line1 = ((w//3, 0), (0, -1 * h // 2))
    line2 = ((2 * w//3, 0), (w-1, -1 * (h//2)))
    line3 = ((0, -1 * (h//2)), (w//3, -1 * (h-1)))
    line4 = ((2 * w // 3, -1 * (h-1)), (w-1, -1 * (h//2)))

    mask = np.ones((h,w))
    for i in range(h):
        for j in range(w):

            if (line1[1][0] - line1[0][0]) * (-1 * i - line1[0][1]) - \
                (line1[1][1] - line1[0][1]) * (j - line1[0][0]) <= 0 : 
                mask[i][j] = 0

            if (line2[1][0] - line2[0][0]) * (-1 * i - line2[0][1]) - \
                (line2[1][1] - line2[0][1]) * (j - line2[0][0]) >= 0 : 
                mask[i][j] = 0

            if (line3[1][0] - line3[0][0]) * (-1 * i - line3[0][1]) - \
                (line3[1][1] - line3[0][1]) * (j - line3[0][0]) < 0 : 
                mask[i][j] = 0

            if (line4[1][0] - line4[0][0]) * (-1 * i - line4[0][1]) - \
                (line4[1][1] - line4[0][1]) * (j - line4[0][0]) < 0 : 
                mask[i][j] = 0
    # ma voi uita pe coloane
    # prima oara voi crea o imagine mai mare
    bigger_image = np.zeros((H+h, W + 2*w//3, C), dtype=np.uint8)
    bigger_image[h//2:H+h//2, w//3:W+w//3] = params.image_resized
    
    # fixed_image = cv.cvtColor(bigger_image, cv.COLOR_RGB2BGR)
    # cv.imshow("imagine mai mare", bigger_image)
    # cv.waitKey(0)
    b_h, b_w, b_c = bigger_image.shape
    img_mosaic = np.zeros((b_h, b_w, b_c), dtype=np.uint8)
    #prima oara pun coloanele impare
    mean_colors_small_images = params.small_images.mean(axis=(1,2))
    inside = mask.astype(bool)

    for i in range(0, b_h - h, h):
        for j in range(0, b_w - w, w):
            patch = bigger_image[i:i+h, j:j+w, :]
            mean_color = patch.mean(axis=(0,1))
            distances = ((mean_color - mean_colors_small_images)**2).sum(axis=(1))
            curr_image = params.small_images[np.argmin(distances)]
            zona = img_mosaic[i:i+h, j:j+w]
            # plt.imshow(curr_image[inside])
            # plt.show()
            zona[inside] = curr_image[inside]
    # cv.imshow("primele_coloane:", img_mosaic)
    
    for i in range(h//2, b_h - h, h):
        for j in range(w//3, b_w - w, w):
            patch = bigger_image[i:i+h, j:j+w, :]
            mean_color = patch.mean(axis=(0,1))
            distances = ((mean_color - mean_colors_small_images)**2).sum(axis=(1))
            curr_image = params.small_images[np.argmin(distances)]
            zona = img_mosaic[i:i+h, j:j+w]
            zona[inside] = curr_image[inside]

    # cv.imshow("a doua imagine", img_mosaic)

    end_time = timeit.default_timer()
    print('running time:', (end_time - start_time), 's')
    return img_mosaic[h//2:H+h//2, w//3:W+w//3]
