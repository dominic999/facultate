def scriereMatrice(matrice):
    fout = open("matrice.out", "w")
    for line in matrice:
        for char in line:
            fout.write(str(char))
            fout.write(" ")
        fout.write("\n")


def cititreMatrice(fisier):
    fin = open(fisier, "r")
    lines = fin.readlines()

    if(verificareMatrice(lines) == 0):
        for line in lines:
            if(verificareComentariu(line) == 1):
                print(line.strip())

def verificareComentariu(linie):
    if (linie[0:2] == "//"):
        return -1
    return 1

def gasirePrimuNonComentariu(matrice):
    for line in range(len(matrice)):
        linie = matrice[line].strip()
        if(linie[0:2] != "//"):
            return line



def verificareMatrice(matrice):
    coloane = len(matrice[gasirePrimuNonComentariu(matrice)].strip().split(" "))
    print("coloane = " + str(coloane))
    
    for i in range(len(matrice)):
        if len(matrice[i].strip().split(" ")) != coloane and verificareComentariu(matrice[i]) == 1:
            print ("ceva")
            return -1
    return 0





matrice = [[1,2,3],[4,5,6],[7,8,9]]
scriereMatrice(matrice)
cititreMatrice("matrice.in")