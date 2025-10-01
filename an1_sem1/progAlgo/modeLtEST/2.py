fin = open("cuvinte.in", "r")
lines = fin.readlines()
cuv = dict()
frecventa = dict()
for i in lines:
    i = i.strip()
    listCuv = i.split(" ")
    for j in listCuv:
        j = j.lower()
        if j not in cuv:
            cuv[j] = 1
        else:
            cuv[j] += 1
for j in cuv.keys():
    if cuv[j] not in frecventa:
        frecventa[cuv[j]] = [j]
    else:
        frecventa[cuv[j]].append(j)   

while(len(frecventa) > 0):
    cuvinte = ", ".join(sorted(frecventa[max(frecventa.keys())]))
    print("Frecventa " + str(max(frecventa.keys())) + ": " + cuvinte)
    del frecventa[max(frecventa.keys())]

fin.close()