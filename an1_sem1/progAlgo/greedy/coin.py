v = int(input("Valoare: "))
n = int(input("Cate monede vrei sa adaugati? "))
coins = [int(input("Valoarea monezii: ")) for i in range(n)]
coins.sort(reverse=True)
valoareTrecuta = 0
numarDeMonede = 0
for i in range(len(coins)):
    if v  == 0:
        break
    while v-coins[i] >= 0:
        v-=coins[i]
        numarDeMonede += 1    
    if(v == 0):
        break
    if v - coins[len(coins)-1] < 0:
        v+=coins[i]
        numarDeMonede-=1

print(numarDeMonede)