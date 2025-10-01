#1
# def divizori(*numere):
#     d = dict()
#     for i in numere:
#         d[i] = []
#         for j in range(2, i-1):
#             if i%j == 0:
#                 ok = 0
#                 if len(d[i]) > 0:
#                     for k in range(2,j-1):
#                         if j % k == 0:
#                             ok = 1
#                             break
                
#                 if(ok == 0):
#                     d[i].append(j)
#     return d

# d = divizori(50, 21)
# print(d)

#1b
# print(ord("a"))
# litere_10 = [chr(ord("a")+x) for x in range(10)]
# print(litere_10)


#2
# n = int(input())
# spectacole = []

# for i in range(n):
#     for j in range(2):
#         inceput = input()
#         final = input()
#         spectacole.append((inceput), final)
                        
# spectacole.sort(key=lambda x:x[1])
# contor = 1
# i,j=0,0
# while i < n:
#     j = i+1
#     while j < n:
#         if(spectacole[i][1] <= spectacole[j][0]):
#             contor+=1
#             break
#         j+=1
#     i = j

# print(contor)


# def aparitii(*numere):
#     d = dict()
#     for numar in numere:
#         d[numar] = list()
#         numar = str(numar)
#         for i in range(10):
#             if str(i) in numar:
#                 count = numar.count(str(i))
#                 d[int(numar)].append((i, count))
#     return d

# d = aparitii(1011, 234, 8158558)
# print(d)
# lista = [x for x in d if len(d[x]) >= 3]
# print(lista)




# n = int(input())
# adv = []
# for i in range(n):
#     adv.append(int(input()))

# adv.sort(reverse=True)
# suma = 0
# while len(adv) > 0:
#     x = len(adv)
#     suma += adv[x-1]/(x+1)
#     adv.pop()

# print(suma)


def set_elemente(*liste):
    d = dict()
    for lista in liste:
        cifre = []
        temp = [str(i) for i in lista]
        temp = "".join(temp)
        for i in range(10):
            if str(i) in temp:
                cifre.append(i)
            
        cifre = "".join(cifre)
        if cifre not in d:
            d[cifre] = 1
        else:
            d[cifre] += 1

    max = 0
    for eticheta in d:
        if d[eticheta] > max:
            max = d[eticheta]

    return max

print(set_elemente([1,3], [4,5], [1,3,1], ))

        


