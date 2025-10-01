#1
# def citire_patrat(fisier):
    # fin = open(fisier, "r")
    # lines = fin.readlines()
    # matrice = [[int(x) for x in line.strip().split(" ")] for line in lines]
    # if len(matrice) != len(matrice[0]) :
        # fin.close()
        # return False
    # else:
        # fin.close()
        # return matrice
# 
# def cifre(matrice, x, *linii):
    # if matrice == False:
        # return False
    # mare = dict() 
    # mic = dict()
    # for line in linii:
        # mare[line] = set()
        # mic[line] = set()
        # for i in range(len(matrice[line])):
            # suma = 0
            # for cifra in str(matrice[line][i]):
                # suma+=int(cifra)
            # if suma >= x:
                # mare[line].add(matrice[line][i])
            # else:
                # mic[line].add(matrice[line][i])
    #aici facem intersectia
    # inter = mic[list(mic.keys())[0]]
    # for i in range(1, len(mic)):
        # if(len(mic[list(mic.keys())[0]])):
            # inter = inter.intersection(mic[list(mic.keys())[i]])
# 
    # uniune = mare[list(mare.keys())[0]]
    # for i in range(1, len(mare)):
        # uniune = uniune.union(mare[list(mare.keys())[i]])
    # return (inter, uniune)
        # 
        # 
# matrice = citire_patrat("patrat.in")
# 
# 
# if(len(matrice) % 2 == 0):
    # liste = cifre(matrice, 9, len(matrice)//2, len(matrice)//2-1)
    # mici = list(liste[0])
    # mici.sort()
    # new = [str(x) for x in mici]
    # print(" ".join(new))
    # 
# else:
    # liste = cifre(matrice, 9, len(matrice)//2, len(matrice)//2-1)
    # mici = list(liste[0])
    # mici.sort()
    # new = [str(x) for x in mici]
    # print(" ".join(new))
# 
# print(matrice)
# liste = cifre(matrice, 9, len(matrice)-3, len(matrice)-2,len(matrice)-1)
# print(len(liste[1])) 
            
#2

def modifica_litera(p, x, y, prop):
    cuvinte = prop.split(" ")
    lungime = len(cuvinte)
    p = p-1
    for cuvant in range(len(cuvinte)):
        if(cuvinte[cuvant][p] == x):
            litera = list(cuvinte[cuvant])
            litera[p] = y
            litera = "".join(litera)
            cuvinte[cuvant] = litera
            lungime-=1
        
    return (" ".join(cuvinte), lungime)

def poz_x(lista, x):
    ind = []
    for i in range(len(lista)):
        if lista[i] == x:
            ind.append(i+1)
    return(ind)

print(modifica_litera(2, "i", "j", "ai bi ci vui"))
print(poz_x([1,2,3,2,4,2], 2))