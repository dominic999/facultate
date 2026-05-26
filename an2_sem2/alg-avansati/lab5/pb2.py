def cal_det(matrice: list[list[float]]):
    det = 0;

    for i in range(3):
        det += matrice[0][i] * matrice[1][(i+1)%3] * matrice[2][(i+2)%3]
        det -= matrice[0][i] * matrice[1][(i+2)%3] * matrice[2][(i+1)%3]
    return det


n = int(input())
desc = []
for i in range(n):
    x, y = map(int, input().split())
    desc.append((x,y))

st = 0
dr = 0
ac = 0

l = len(desc)
for i in range(l - 2):
    x = cal_det([[1,1,1],[desc[i][0], desc[i+1][0], desc[i+2][0]], [desc[i][1], desc[i+1][1], desc[i+2][1]]])
    if x > 0:
        st+=1
    elif x < 0:
        dr+=1
    else: 
        ac+=1


x = cal_det([[1,1,1], [desc[-2][0] ,desc[-1][0], desc[0][0]], [desc[-2][1], desc[-1][1], desc[0][1]]])
if x > 0:
    st+=1
elif x < 0:
    dr+=1
else: 
    ac+=1



print(f"{st} {dr} {ac}")
