def citireMultime(fisier):
    fin = open(fisier, "r")
    listaMultimi = []
    for line in range(4):
        multimeActuala = fin.readline()
        multimeActuala = multimeActuala[3:].strip().split(",")
        listaMultimi.append(multimeActuala)
    return listaMultimi

def citireFunctie(fisier):
    fin = open(fisier, "r")
    lines = fin.readlines()
    functie = dict()
    for line in lines[4:]:
        startCheie = line.find("(")+1
        endCheie = line.find(")")
        cheie = line[startCheie:endCheie]
        startRez = line.find("(", startCheie+1)+1
        endRez = line.find(")",endCheie+1)
        rezultat = tuple(line[startRez:endRez].strip().split(","))
        functie[cheie] = rezultat
    return functie


def tranzitie(alfabet, functie, stareActuala, inputChar):
    if(inputChar not in alfabet):
        print("Acest simbol nu este in alfabet")
        return 
    cheie = str(stareActuala) + "," + str(inputChar)
    return functie[cheie][0], functie[cheie][1], functie[cheie][2]

def citire(alfabet, functie, inp, multimeStari, stareAccept, stareReject):
    index=0
    perioada = False
    inputInitial = inp
    #! Aici o sa verific daca este perioada
    if inp[0] == "(":
        perioada = True
        index+=1
        inputInitial.pop()
        inputInitial.remove(inputInitial[0])
        inp.pop()
        inp.remove(inp[0])
    stareActuala = multimeStari[0]
    while(True):
        while(index < len(inp)):
            #! Aici verific daca in cazul in care este perioada a ajuns la final
            #! Daca a ajuns la final, adaug inca o data inputul initial la coada
            if index == len(inp)-1 and perioada == True:
                inp.extend(inputInitial)
            stareActuala,rep,directie = tranzitie(alfabet, functie, stareActuala, inp[index])
            if(stareActuala == stareAccept):
                return True
            elif(stareActuala == stareReject):
                return False
            inp[index] = rep
            if(directie == "r"):
                index+=1
            else:
                index-=1
            
        #! Aici daca am iesit din rang, verific daca userul vrea sa contnue sau vrea sa o lase asa
        bo = input("Scanner-ul a depasit inputul introdus de tine si nu a ajuns " \
        "intr un halting state, doresti sa introduci continuarea inputului?")
        if(bo == 'n'):
            break
            return
        inNou = input("Introduceti continuarea inputului: ")
        inNou = [i for i in inNou]
        inp.extend(inNou)
        



fisier = "mt.in"
multimi = citireMultime(fisier)
multimeStari = multimi[0]
alfabetIn = multimi[1]
alfabetTape = list(multimi[2])
print(type(alfabetIn))
alfabetTape.append("_")
alfabetTape.extend(alfabetIn)
stareAccept, stareReject = multimi[3][0], multimi[3][1]
functie = citireFunctie(fisier)
print("multimi:")
print(multimi)
print("functie:")
print(functie)
inp = str(input("Adaugati inputul: "))
inp = [str(i) for i in inp]

if(citire(alfabetIn, functie, inp, multimeStari, stareAccept, stareReject)):
    print("A ajuns in accept")
    print(inp)
else:
    print("Nu a ajuns in accept")