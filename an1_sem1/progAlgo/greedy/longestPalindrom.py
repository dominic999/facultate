cuvant  = "a"
palindrom = {}
for i in range(len(cuvant)):
    if cuvant[i] in palindrom:
        palindrom[cuvant[i]]+=1
    else:
        palindrom[cuvant[i]]=1 

suma = 0
ok = 0
for i in palindrom:
    if palindrom[i] % 2 == 0:
        suma+=palindrom[i]
    else:
        suma+=palindrom[i] - 1
        if ok == 0:
            ok+=1
            suma+=1
print(suma)