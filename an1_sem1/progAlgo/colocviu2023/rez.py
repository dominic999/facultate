#1
# fin = open("text.in", "r")
# w = fin.readline()
# w = set(x for x in w)
# lines = fin.readlines()
# multimi = dict()
# punctuatie = ['.', ",", "-" ,"!", "?"]
# for line in lines:
#     line = line.strip().split(" ")
#     for word in line:
#         word3 = "".join([x for x in word if x not in punctuatie])
#         word3 = word3.lower()
#         word2 = set(x for x in word3)
#         diferenta = word2.difference(w)
#         if diferenta == set():
#             eticheta = []
#             for x in word3:
#                 if x not in eticheta and x not in punctuatie:
#                     eticheta.append(x)
#             eticheta.sort()
#             eticheta = "".join(eticheta)
#             if(eticheta in multimi):
#                 if(word not in multimi[eticheta]):
#                     multimi[eticheta].append(word)

#             else:
#                 multimi[eticheta] = []
#                 multimi[eticheta].append(word)

# m = sorted(multimi.keys())
# for i in m:
#     print("Literele [", end = " ")
#     for j in i:
#         print("'" + j + "',", end = " ")
#     print("]")
#     print(" ".join(multimi[i]))

#2
# def citire_matrice():
#     fin = open("matrice.in", "r")
#     lines = fin.readlines()
#     n = len(lines)
#     matrice = [[0 for i in range(n)]for j in range(n)]
#     for i in range(n):
#         lines[i] = lines[i].strip().split(" ")
#         for j in range(n):
#             matrice[i][j] = int(lines[i][j])
#     return(matrice)

# def matrice_noua(matrice):
#     n = len(matrice)
#     sumaL = 0
#     sumaC = [0 for i in range(n+1)]
#     for i in range(n):
#         sumaL = 0 
#         for j in range(n):
#             sumaL += matrice[i][j]
#             sumaC[j] += matrice[i][j]
#         matrice[i].append(sumaL)
#         sumaC[n] += matrice[i][n]
#     matrice.append(sumaC)
#     return matrice


# def parcurgere_matrice(matrice):
#     n = len(matrice)
#     fout = open("matrice.out", "w")
#     lista = []
#     prin = 0
#     sec = 0
#     for i in range(n):
#         for j in range(n):
#             if i == j:
#                 lista.insert(prin, str(matrice[i][j]))
#                 prin += 1
#             elif i+j == n-1:
#                 lista.insert(prin + sec, str(matrice[i][j]))
#                 sec += 1
#             else:
#                 lista.append(str(matrice[i][j]))
#     lista = " ".join(lista)
#     fout.write(lista)
            

# matrice = citire_matrice()
# print(matrice_noua(matrice))
# parcurgere_matrice(matrice)


#3
def citire_structura(fisier):
    fin = open(fisier, "r")
    lines = fin.readlines()
    structura = dict()
    for line in lines:
        line = line.strip().split(" ")
        # line[0] = tuple(x for x in line[0] if x not in "[,] ")
        # line[1] = tuple(x for x in line[1] if x not in "[,] ")
        # line[0] = [line[0],line[1]]
        line[0] = " ".join(line[0:2])
        del(line[1])
        line[2] = " ".join(line[2:4])
        del(line[3])
        structura[line[0]] = dict()
        structura[line[0]][line[2]] = line[1]
    return(structura)

def insereaza_legatura(struct, punct1, punct2, culoare, eticheta): #punct1 si punct 2 sunt tupluri
    for i in struct:
        p1 = tuple(int(x) for x in i[0:5] if x not in " [,]")
        p2 = tuple(int(x) for x in i[6:12] if x not in " [,]")
        if((p1 == punct1 and p2 == punct2) or (p2 == punct1 and p1 == punct2)):
            return False
        p3 = [str(x) for x in punct1]
        p4 = [str(x) for x in punct2]
        p3 = p3+p4
        string = "["+",".join(p3[0:2])+"] ["+",".join(p3[2:4])+"]"
        struct[string] = dict()
        struct[string][eticheta] = culoare
        return True


def vecini(struct, *puncte):
    lungime = 0
    lista = []
    ind = 0
    legaturi = dict()
    for j in struct:
        lungime = 0
        p1 = tuple(int(x) for x in j[0:5] if x not in " [,]")
        p2 = tuple(int(x) for x in j[6:12] if x not in " [,]")
        for i in puncte:
            if(i == p1):
                if p1 in legaturi:
                    legaturi[p1].add(p2) 
                else:
                    legaturi[p1] = set()
                    legaturi[p1].add(p2) 
            if(i == p2):
                if p2 in legaturi:
                    legaturi[p2].add(p1) 
                else:
                    legaturi[p2] = set()
                    legaturi[p2].add(p1) 
    print("leg: ", end = " ")
    print(legaturi)
    inter = set()
    for x in range(len(legaturi)):
        if(x == 0):
            inter = legaturi[list(legaturi.keys())[0]]
        else:
            inter = inter.intersection(legaturi[list(legaturi.keys())[x]])
    print("inter", end = " ")
    print(inter)

        



structura = citire_structura("legaturi.in")
insereaza_legatura(structura, (1,3), (2,7), "negru", "legatura noua")
print(structura)
vecini(structura, (2,7), (1,2))