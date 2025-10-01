def citeste_informatii_masiini(fin):
    inp = open(fin, "r")
    lines = inp.readlines()
    for line in lines:
        line = line.strip().split("#")
        for i in range(len(line)):
            if i == 0:
                masini[line[0]] = []
            else:
                masini[line[0]].append(line[i])

def adauga_masina(dict, id, motor, kilo, marca):
    dict[id] = [marca, motor, kilo]
    lista = []
    for i in dict:
        lista.append(tuple(dict[i]))
    return lista


masini = dict()
fisier = "masini.in"
citeste_informatii_masiini(fisier)
adauga_masina(masini, 10, 2.4, 200, "ferrarri")