
#!Dictionarul "functie" retine perechi de genul
#!cheie: (stareActuala, inputChar, varfStiva), valoare: (stareNoua, popStiva)

def citireMultime(fisier):
    fin = open(fisier, "r")
    listaMultimi = []
    for line in range(3):
        multimeActuala = fin.readline()
        multimeActuala = multimeActuala[3:].strip().split(",")
        listaMultimi.append(multimeActuala)
    return listaMultimi

def citireFunctie(fisier):
    fin = open(fisier, "r")
    lines = fin.readlines()
    functie = dict()
    for line in lines[3:]:
        startCheie = line.find("(")+1
        endCheie = line.find(")")
        cheie = line[startCheie:endCheie]
        startRez = line.find("(", startCheie+1)+1
        endRez = line.find(")",endCheie+1)
        rezultat = tuple(line[startRez:endRez].strip().split(","))
        functie[cheie] = rezultat
    return functie

def pushStiva(stiva, caracter):
    if caracter == "&":
        return stiva
    stiva.append(caracter)
    return stiva

def popStiva(stiva):
    stiva.pop()
    return stiva

#? Aceasta functie efectueaza o tranzitie de la o stare la alta
def tranzitie(alfabet, functie, inputChar, stiva, stareInitiala):
    if inputChar not in alfabet:
        print("Acest caracter nu este in alfabet")
        print(inputChar)
        return 1,1
    cheie = str(stareInitiala) + "," + str(inputChar) + "," + str(stiva[-1])
    cheiePotentiala = str(stareInitiala) + "," + str(inputChar) + ",&" 
    if(cheie not in functie):
        stareActuala = functie[cheiePotentiala][0]
        if(functie[cheiePotentiala][-1] != "&"):
            stiva.append(functie[cheiePotentiala][-1])
        if(cheiePotentiala[-1] != "&"):
            stiva.pop()
    elif (cheie not in functie and cheiePotentiala not in functie):
        print("Nu ati introdus acest caz: ")
        print(cheie)
        return 0,0
    else:
        stareActuala = functie[cheie][0]
        if(functie[cheie][-1] != "&"):
            stiva.append(functie[cheiePotentiala][-1])
        if(cheie[-1] != "&" and cheie[-1]!="$"):
            stiva.pop()
    #! Daca caractel de scos de pe stiva este cuantul vid, nu se va intampla nimic cu stiva
    #! Daca caracterul de pushat pe stiva este cuvantul vid, nu se va intampla nimic cu stiva
    return stareActuala, stiva
#? Daca exista o cheie de tip, (stareActuala, cuvantVid, $)
#? care ma trimite intr o stare de accept insesamna ca e bine``

#! Aici o sa efectuez toate tranzitiile
def citire(alfabet, multimeStari, stiva, inputString, functie, accept):
    stareActuala = multimeStari[0]
    inputString = [i for i in inputString]
    while(len(inputString) > 0):
        stareActuala,stiva = tranzitie(alfabet, functie, inputString[0], stiva, stareActuala)
        if(stareActuala == 0 and stiva==0) or (stareActuala==1 and stiva==1):
            return 
        # print("stare actuala: " + stareActuala)
        inputString.remove(inputString[0])
    cheieVerif = str(stareActuala) + ",&,$"
    if (cheieVerif in functie):
        if functie[cheieVerif][0] in accept:
            return True
    return False


#! Aici verific daca s-a ajuns intr o stare de accept



#! Practic starea mea actuala va fi un tuplu de tip (stareNoua, pushPeStiva)

fisier = str(input("Va rog sa introduceti numele fisierului unde este definit pda ul: "))
functie = citireFunctie(fisier)
multimi = citireMultime(fisier)
listaStari = multimi[0]
alfabet = multimi[1]
accept = multimi[2]
stiva = ["$"]
# print(functie)
inp = input("string: ")

if(citire(alfabet, listaStari, stiva, inp, functie, accept)):
    print("corect")
else:
    print("gresit")