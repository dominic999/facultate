import sys
import matplotlib.pyplot as plt
import cv2 as cv
import numpy as np
import pdb


def select_random_path(E):
    # pentru linia 0 alegem primul pixel in mod aleator
    line = 0
    col = np.random.randint(low=0, high=E.shape[1], size=1)[0]
    path = [(line, col)]
    for i in range(E.shape[0]):
        # alege urmatorul pixel pe baza vecinilor
        line = i
        # coloana depinde de coloana pixelului anterior
        if path[-1][1] == 0:  # pixelul este localizat la marginea din stanga
            opt = np.random.randint(low=0, high=2, size=1)[0]
        elif path[-1][1] == E.shape[1] - 1:  # pixelul este la marginea din dreapta
            opt = np.random.randint(low=-1, high=1, size=1)[0]
        else:
            opt = np.random.randint(low=-1, high=2, size=1)[0]
        col = path[-1][1] + opt
        path.append((line, col))

    return path

def select_dynamic_programming_path(E):
    #TODO: scrieti codul
    M = np.zeros(E.shape, dtype=np.int32)
    M[0, :] = E[0, :]
    for i in range(1, M.shape[0]):
        for j in range(M.shape[1]):
            if j == 0:
                M[i,j] = E[i,j] + min(M[i-1, j], M[i-1,j+1]) 
            elif j == M.shape[1]-1:
                M[i,j] = E[i,j] + min(M[i-1, j], M[i-1,j-1]) 
            else:
                M[i,j] = E[i,j] + min(M[i-1, j], M[i-1,j-1], M[i-1][j+1]) 

    print(f'tip m: {M.dtype}')
    plt.title('M')
    plt.imshow(M, cmap='Blues')
    plt.show()

    line = [0 for i in range(E.shape[0])]
    line[0] = np.argmin(M[-1, :])
    for i in range(1, E.shape[0]):
        row = E.shape[0] - 1 - i
        col = np.argmin(M[row][line[i - 1]-1:line[i - 1]+2])
        col = col-1
        line[i] = M[row][line[i-1] + col]


    return line


def select_path(E, method):
    if method == 'aleator':
        return select_random_path(E)
    elif method == 'programareDinamica':
        return select_dynamic_programming_path(E)
    else:
        print('The selected method %s is invalid.' % method)
        sys.exit(-1)
