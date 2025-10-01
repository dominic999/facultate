# fin = open("date.in", "r")
# fout = open("date.out", "w")
# lines = fin.readlines()
# d = dict()

# for line in lines:
#     line = line.strip()
#     line = line.split(" ")
#     print(line)

#     if(line[1]not in d):
#         d[line[1]] = [1, [line[0]]]
#     else:
#         d[line[1]][1].append(line[0])
#         d[line[1]][0] += 1
#     d[line[1]][1].sort()


# lista = []
    
        
# print(d)
    

# def greedy(file):
#     fin = open(file, "r")
#     lines = fin.readlines()
#     listaTurn = []
#     for line in range(lines):
#         linie = lines[line].strip().split(" ")
#         if(len(listaTurn) == 0):
#             listaTurn.append(line)
#         else:
#             if(linie[0] > listaTurn)

def turn_greedy(cuburi, n):
    # Sortăm cuburile după dimensiunea laturii
    cuburi.sort(key=lambda x: x[0])
    
    turn = []
    inaltime = 0
    ultima_culoare = -1
    ultima_latura = -1
    
    for latura, culoare, indice in cuburi:
        # Adăugăm cubul dacă respectă regulile
        if culoare != ultima_culoare and latura > ultima_latura:
            turn.append(indice)
            inaltime += 1
            ultima_culoare = culoare
            ultima_latura = latura

    return inaltime, turn

# Citire date
with open("cuburi.in", "r") as f:
    n, p = map(int, f.readline().split())
    cuburi = []
    for i in range(n):
        latura, culoare = map(int, f.readline().split())
        cuburi.append((latura, culoare, i + 1))  # Salvăm și indicele cubului

# Rezolvare
inaltime, turn = turn_greedy(cuburi, n)

# Scriere rezultate
with open("cuburi.out", "w") as f:
    f.write(f"{inaltime}\n")
    f.write(" ".join(map(str, turn)) + "\n")
