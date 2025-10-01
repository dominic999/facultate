fisierIn = open("matrice.in", "r")
linii = fisierIn.readlines()
for i in linii:
    i = i.strip()
    linie = i.split(" ")
    for j in range(len(linie)):
        linie[j] = int(linie[j])
    linie.remove(max(linie))
    linie.remove(max(linie))
    print(linie)

fisierIn.close()