# Vreau sa vad care incepe cu cei mai multi de zero
# Daca sunt mai multe care incep cu la fe de multe zerouri, vedem care are primul zero cel miai devreme si tot asa
def calculareGrid(grid, n, m):
    sum = 0 
    for i in range(n):
        for j in range(m):
            sum += grid[i][j]*2**(m-j-1)
    return sum



def createGrid():
    global n
    global m
    fin = open("cuburi.in", "r")
    lines = fin.readlines()
    for i in range(len(lines)):
        line = lines[i].strip().split(" ")
        if i == 0:
            n = int(line[0])
            m = int(line[1])
            grid = [[0 for i in range(m)] for j in range(n)]
        else:
            for j in range(len(line)):
                grid[i-1][j] = int(line[j])
    return grid

liniiPotentiale = dict()
coloanePotentiale = dict()

def verificareGrid(grid, n, m):
    global liniiPotentiale
    global coloanePotentiale
    max = -1
    linie = -1
    liniiPotentiale = dict() 
    for j in range(m):  
        for i in range(n):
            if(grid[i][j] == 0 and j == 0):
                linie+=1
                max+=1
                liniiPotentiale[i] = j
            elif(grid[i][j] == 0 and j != 0 and i in liniiPotentiale):
                liniiPotentiale.clear()
                liniiPotentiale[i] = j
        if(linie == -1): #asta inseamna ca nu vrem sa facem nicio schimbare pe linie
            break

    coloana = -1
    coloanePotentiale = dict()
    for i in range(n):  
        for j in range(m):
            if(grid[i][j] == 0 and i == 0):
                coloanePotentiale[j] = i
                max+=1
                coloana += 1
            elif(grid[i][j] == 0 and i != 0 and j in coloanePotentiale):
                coloanePotentiale.clear()
                coloanePotentiale[j] = i
        if(coloana == -1): 
            break

    if(coloana == -1 and linie == -1):
        return 0

    if coloana == -1:
        return "linie"
    elif linie == -1:
        return "coloana"

    cheieLinii = list(liniiPotentiale.keys())[0] 
    cheieColoane = list(coloanePotentiale.keys())[0]
    if liniiPotentiale[cheieLinii] > coloanePotentiale[cheieColoane]:
        return "linie"
    elif liniiPotentiale[cheieLinii] < coloanePotentiale[cheieColoane]:
        return "coloana"
    elif liniiPotentiale[cheieLinii] == coloanePotentiale[cheieColoane]:
        if m >= n:
            return "linie"
        else:
            return "coloana"

def schimbareGrid(grid, directie, numar):
    if(directie == "linie"):
        for i in range(len(grid[numar])):
            if grid[numar][i] == 0:
                grid[numar][i] = 1
            else:
                grid[numar][i] = 0
    if directie == "coloana":
        for i in range(len(grid)):
            if grid[i][numar] == 0:
                grid[i][numar] = 1
            else:
                grid[i][numar] = 0


grid = createGrid()    
n = len(grid)
m = len(grid[0])


x = 0
while(verificareGrid(grid, n, m) != 0):
    arg = verificareGrid(grid, n, m)
    if(arg == "linie"):
        schimbareGrid(grid, arg, list(liniiPotentiale.keys())[0])
    else:
        schimbareGrid(grid, arg, list(coloanePotentiale.keys())[0])
    
    x+=1

print(calculareGrid(grid, n, m))

    

            

