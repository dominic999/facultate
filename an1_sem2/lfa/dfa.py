
#! Fac o functie ce testeaza stringul pe accept sau nu
#TODO la reuniune pot sa impart in doua regexuri separate
indexMultimi = ["Q", "E", "F"]
#Prima multime este cea de stari, apoi alfabetul si apoi stariile de accpetare
multimi = list()
numarMultimi = 3

def citireMultime(fisier):
    fin = open(fisier, "r")
    listaMultimi = []
    for line in range(3):
        multimeActuala = fin.readline()
        multimeActuala = multimeActuala[3:].strip().split(",")
        listaMultimi.append(multimeActuala)
    functie = citireFuncite(fisier)
    return (listaMultimi, functie)

def citireFuncite(fisier):
    fin = open(fisier, "r")
    lines = fin.readlines()
    functie = dict()
    for line in lines[3:]:
        cheie = line[2:5]
        inc = line.find("=")+1
        rezultat = line[inc:].strip()
        functie[cheie] = rezultat
    return functie


def verificareStareFinala(multimeStari, alfabet, accept, functie,
                           inputString, stareInitiala):
    
    stareActuala = stareInitiala
    litera = 0
    while litera < len(inputString):
        count = 0
        if litera + 1 < len(inputString) and inputString[litera+1] == "*":
            count+=1
            stariPosibile = star(multimeStari, alfabet, accept, functie,
                          inputString[litera:], stareActuala)
            for stare in stariPosibile:
                check = verificareStareFinala(multimeStari, alfabet, accept, functie,
                           inputString[litera+2:], stare)
                if check not in accept:
                    return "Nu accepta" 
            litera+=1

        elif inputString[litera] != "*":
            cheie = str(stareActuala) + "," + str(inputString[litera])
            stareActuala = functie[cheie]
        litera+=1

    return stareActuala

#!!!!!! Am facut sa returneze o lista de stari posibile functia star, trebuie sa continui o chestie recursiva

def star(multimeStari, alfabet, accept, functie, inputString, stareInitiala):
    stareActuala = stareInitiala
    stariPosibile = []
    while stareActuala not in stariPosibile:
        stariPosibile.append(stareActuala)
        stareActuala =  verificareStareFinala(multimeStari, alfabet, accept, 
                                      functie, inputString[0], stareActuala)
    return stariPosibile 
    


def verificareAccept(stareActuala, accept):
    if stareActuala not in accept:
        return False
    return True


fisier = "par.in"
listaMultimi = citireMultime(fisier)[0]
functie = citireMultime(fisier)[1]

multimeStari = listaMultimi[0]
alfabet = listaMultimi[1]
accept = listaMultimi[2]
stareInitiala = multimeStari[0]

inputString = input("Adauga regex: ")
check = verificareStareFinala(multimeStari, alfabet, accept, functie, inputString, stareInitiala)

if check in accept:
    print("A fost acceptat")

else:
    print("Nu a fost acceptat")