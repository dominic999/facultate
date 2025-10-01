#1-b
# def func(s, x, i=0, j=None):
#     for element in s[i:j]:
#         if element > x:
#             return element

#     return -1

# print(func([1,2,3,15,7], 4))


#1-c
# def func(s, x, i=0, j=None):
#     for element in s[i:j]:
#         if element > x:
#             return element

#     return -1

# s = [15,14,13,12,11,10,13]
# check = 0 

# for i in range(len(s)-1):
#     if func(s, s[i], i, i+2) != -1:
#         print("nu")
#         check = 1

# if(check == 0):
#     print("da")


#2-a
# def func(*numar):
#     list=[]
#     for i in numar:
#         list.append(max(str(i)))
    
#     return "".join(list)

# print(func(4251, 73, 8, 133))


#2-b
# def func(*numar):
#     list=[]
#     for i in numar:
#         list.append(max(str(i)))
#     if(list[0] == "0"):
#         return "".join(list[1:])

#     return "".join(list)

# def verif(a, b, c):
#     if func(a,b,c) <= "111":
#         return True
#     return False

# print(verif(1,121,1111101))


#3
# def cautare_cuvant(cuv, nums_fis_out, *nums_fis_in):
#     afisare = open(nums_fis_out, "w")
#     for i in nums_fis_in:
#         citire = open(i, "r")
#         lista = citire.readline()
#         for line in range(len(lista)):
#             lista[line] = lista[line].strip()
#             cuvinte = lista[line].split()

#             for cuvant in cuvinte 


# cautare_cuvant("ceva", "one.txt", "in.txt")


#modula
import lab7.modul1 as modul1

a = 7104
print(modul1.invers(a))
