from numpy.ma import getmask

from parameters import *
import numpy as np
import pdb
import timeit

def get_mask_hexagon(H,W):
    ind_mj = H//2
    ind_start = int(np.floor(W//3))
    ind_end = int(np.ceil(2*W//3))
    mask = np.zeros((H,W, 1))
    for i in range(ind_mj):
        for j in range(max(0,ind_start), min(W, ind_end)):
            mask[i][j] = 1
            mask[H-i-1][j] = 1
        ind_start -= 1
        ind_end += 1
    return mask



def add_pieces_grid(params: Parameters):
    start_time = timeit.default_timer()
    img_mosaic = np.zeros(params.image_resized.shape, np.uint8)
    N, H, W, C = params.small_images.shape
    h, w, c = params.image_resized.shape
    num_pieces = params.num_pieces_vertical * params.num_pieces_horizontal

    if params.criterion == 'aleator':
        pass
        #print('Building mosaic %.2f%%' % (100 * (i * params.num_pieces_horizontal + j + 1) / num_pieces))

    elif params.criterion == 'distantaCuloareMedie':
        pass
        #print('Building mosaic %.2f%%' % (100 * (i * params.num_pieces_horizontal + j) / num_pieces))
    else:
        print('Error! unknown option %s' % params.criterion)
        exit(-1)

    end_time = timeit.default_timer()
    print('Running time: %f s.' % (end_time - start_time))

    return img_mosaic


def add_pieces_random(params: Parameters):
    start_time = timeit.default_timer()
    end_time = timeit.default_timer()
    print('running time:', (end_time - start_time), 's')
    return None


def add_pieces_hexagon(params: Parameters):
    start_time = timeit.default_timer()

    img_mosaic = np.zeros(params.image_resized.shape, np.uint8)
    N, H, W, C = params.small_images.shape
    h, w, c = params.image_resized.shape
    mean_color_small_pieces = get_mean_color_small_image(params,c)
    bigger_image = np.zeros((h+2*H, w+2*W, c), np.uint8)
    bigger_image[H:-H, W:-W, :] = params.image_resized.copy()
    img_mosaic = np.zeros(bigger_image.shape, np.uint8)
    mask = get_mask_hexagon(H,W)
    for i in range(H/2, bigger_image.shape[0]-H, H):
        for j in range(0, bigger_image.shape[1]-W, W+W//3):
            patch = bigger_image[i:i+H, j:j+W, :].copy()
            mean_color_patch = np.mean(patch, axis=(0,1))
            sorted_indices = get_sorted_distances(mean_color_patch, 
                                             mean_color_small_pieces)
            index = sorted_indices[0]
            img_mosaic[i:i+H, j:j+W, :] = img_mosaic[i:i+H, j:j+W, :] * (1-mask)\
                                         + mask*params.small_images[index]
    for i in range(0, bigger_image.shape[0]-H, H):
        for j in range(2*W//3, bigger_image.shape[1]-W, W+W//3):
            patch = bigger_image[i:i+H, j:j+W, :].copy()
            mean_color_patch = np.mean(patch, axis=(0,1))
            sorted_indices = get_sorted_distances(mean_color_patch, 
                                             mean_color_small_pieces)
            index = sorted_indices[0]
            img_mosaic[i:i+H, j:j+W, :] = img_mosaic[i:i+H, j:j+W, :] * (1-mask)\

    img_mosaic = img_mosaic[H:-H, W:-W]



    end_time = timeit.default_timer()
    print('running time:', (end_time - start_time), 's')
    return None
