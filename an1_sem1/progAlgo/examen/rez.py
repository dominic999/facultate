# import math
# def palindrom(*cuvinte):
#     d = dict()
#     vocale = set()
#     consoane = set()
#     for cuvant in cuvinte:
#         ok = 0
#         vocale = set()
#         consoane = set()
#         lenV = 0
#         lenC = 0
#         for i in range(len(cuvant)):
#             if cuvant[i] != cuvant[len(cuvant)-1-i]:
#                 ok = 1
#                 break
#             if(cuvant[i] in "aeiou"):
#                 vocale.add(cuvant[i])
#                 lenV+=1
#             else:
#                 consoane.add(cuvant[i])
#                 lenC+=1
#         if ok == 0:
#             if lenV > lenC:
#                 d[cuvant] = list(vocale)
#             else:
#                 d[cuvant] = list(consoane)
#     return d

# print(palindrom("asa", "merem", "palindrom"))

# numere = [x for x in range(10, 100) if math.sqrt(x) != math.sqrt(x)//1 and x%7 != 0]
# print(numere)


#2
# n = int(input())
# nuferi = [int(input()) for x in range(n)]
# sol = [0] * n


# i = n-1
# j = i-1
# a = -1
# while(i > 0):
#     j = i-1
#     while(j > -1):
#         if(i - j <= nuferi[j]):
#             a = j
#         j-=1
#     sol[i]  = a
#     i = a

# i = 0
# sol_fin = ["1"]
# while i <= n-1:
#     if sol[i] != 0:
#         sol_fin.append(str(sol[i]+1))
#     i+=1
# sol_fin.append(str(n))
# print(" ".join(sol_fin))


#3
# n = int(input())
# m = int(input())
# table = [[0 for i in range(m)]for j in range(n)]
# sol = [[0 for i in range(m)]for j in range(n)]

# fin = open("cub.in", "r")
# dim = fin.readline()
# dim = dim.strip().split(" ")
# lines = fin.readlines()
# y = 0
# table = [[0 for i in range(int(dim[1]))] for j in range(int(dim[0]))]
# sol = [[0 for i in range(int(dim[1]))] for j in range(int(dim[0]))]

# for line in lines:
#     line = line.strip().split(" ")
#     for x in range(len(line)):
#         table[y][x] = int(line[x])
#     y+=1
        



# for i in range(n):
#     for j in range(m):
#         table[i][j] = int(input())


# n = int(dim[0])
# m = int(dim[1])

# sol[0][m-1] = table[0][m-1]
# for i in range(m-2, -1, -1):
#     if sol[0][i+1] < 0:
#         sol[0][i] = -1
#     else:
#         sol[0][i] = table[0][i] + sol[0][i+1]

# for i in range(1,n):
#     if sol[i-1][m-1] < 0:
#         sol[i][m-1] = -1 
#     else:
#         sol[i][m-1] = table[i][m-1] + sol[i-1][m-1]

# for i in range(1, n):
#     for j in range(m-2, -1, -1):
#         if(sol[i-1][j+1] < 0):
#             sol[i][j] = table[i][j] + max(sol[i-1][j], sol[i][j+1])
#         elif sol[i-1][j] < 0:
#             sol[i][j] = table[i][j] + max(sol[i-1][j+1], sol[i][j+1])
#         elif sol[i][j+1] < 0:
#             sol[i][j] = table[i][j] + max(sol[i-1][j+1], sol[i-1][j])
#         else:
#             sol[i][j] = table[i][j] + max(sol[i-1][j], sol[i-1][j+1], sol[i][j+1])
            

# sol_fin = []
# sol_fin.append((n, sol[n-1].index(max(sol[n-1]))+1))

# i = n-1
# j = sol[n-1].index(max(sol[n-1]))
# while i > 0 and j<m-1:
#     maxim = max(sol[i][j+1], sol[i-1][j+1], sol[i-1][j])
#     if(maxim == sol[i][j+1]):
#         sol_fin.append((i+1, j+2))
#         j+=1
#     elif(maxim == sol[i-1][j+1]):
#         sol_fin.append(i, j+2)
#         i-=1
#         j+=1
#     elif(maxim == sol[i-1][j]):
#         sol_fin.append((i, j+1))
#         i-=1 


# if(i == 0):
#     j+=1
#     while j < m:
#         sol_fin.append((i+1, j+1))
#         j+=1
# if(j == m-1):
#     i-=1
#     while i >= 0:
#         sol_fin.append((i+1, j+1))
#         i-=1

# for i in range(len(sol_fin)-1,-1,-1):
#     print(" ".join(str(sol_fin[i])))


#PD - Moga

# fin = open("cub.in", "r")
# dim = fin.readline()
# dim = dim.strip().split(" ")
# n = int(dim[0])
# m = n
# pozCal = 0

# matrice = [[0 for i in range(m)] for j in range(m)]
# lines = fin.readlines()

# x = 0
# y = 0 

# while y < len(lines):
#     if y == len(lines) - 1:
#         pozCal = lines[y].strip().split()
#         xc = pozCal[0]
#         yc = pozCal[1]
#         break
#     else:
#         line = lines[y].strip().split(" ")
#         for i in range(len(line)):
#             matrice[y][i] = int(line[i])
#     y+=1
# print(matrice)

# dp = [[0 for i in range(n)] for j in range(n)]

# dp[n-1][n-1] = matrice[n-1][n-1]
# x = n-1
# y = n-1
# while(x != xc and y != yc):
#     if(x + 2 > 0):
#         if()


#bkt

# p = int(input())
# c = int(input())

p = 3
c= 6
numar = int("1" * c)

def bkt(p,c,numar,lungime, index, lista):
    #numar este cel mai mare numar adica cifra 1 de c ori
    if(str(numar) not in lista and sum(int(i) for i in str(numar)) == c):
        if abs(int(max(i for i in str(numar))) - int(min(i for i in str(numar)))) <= p:
            lista.add(str(numar))
        # print(numar)
    if(numar < 10):
        return 0
    copie = str(numar)
    temp = str(numar)[lungime-2:lungime]
    temp = sum(int(i) for i in temp)
    numar = str(numar)
    if temp > 9:
        return 0

    temp = str(temp)
    numar = [i for i in numar]
    numar[lungime-2:lungime-1] = temp
    del(numar[lungime-1])
    numar = "".join(numar)
    lungime = len(numar)
    numar = int(numar)
    bkt(p,c,numar,lungime,lungime-1, lista)

    if int(copie) < int("1" * c):
        s = sum(int(i) for i in str(numar))
        if(copie not in lista and abs(int(max(i for i in str(copie))) - int(min(i for i in str(copie)))) <= p):
            lista.add(str(copie))
            # print(copie)
        copie = [i for i in copie] 
        cp = copie[index-1]
        copie[index-1] = copie[index]
        copie[index] = cp
        copie = int("".join(copie))
        if index >= 0 :
            bkt(p,c,copie,lungime, index-1, lista)
    

lista = set()

bkt(p,c,numar,c, c-1, lista)
print(len(lista))