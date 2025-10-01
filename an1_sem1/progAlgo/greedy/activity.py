# activitati = {}
# numar_activitati = int(input("Cate activitati sunt? "))
# for i in range(numar_activitati):
#     activitate = input("Ce activitate vreti sa adaugati? ")
#     interval = list()
#     inceput = input("La ce ora incepe? ")
#     final = input("La ce ora se termina? ")
#     interval.append(inceput)
#     interval.append(final)
#     activitati[activitate] = interval

def sortare(inceput, final, n):
    for i in range(n-1):
        for j in range(i, n-1):
            if final[j] > final[j+1]:
                swap = inceput[j]
                inceput[j] = inceput[j+1]
                inceput[j+1] = swap 
                swap =final[j]
                final[j] =final[j+1]
                final[j+1] = swap 


n = int(input("Cate activitati aveti de facut? "))

start = [input("inceput: ") for i in range(n)] 
final = [input("final: ") for i in range(n)] 
sortare(start, final, n)
solutie = []
tup = tuple([start[0], final[0]])
solutie.append(tup)

for i in range(1,n):
    if start[i] >= solutie[len(solutie)-1][1]:
        tup = tuple([start[i], final[i]])
        solutie.append(tup)

print(solutie)