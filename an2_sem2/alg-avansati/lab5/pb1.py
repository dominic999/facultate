

def cal_det(matrice: list[list[float]]):
    det = 0;

    for i in range(3):
        det += matrice[0][i] * matrice[1][(i+1)%3] * matrice[2][(i+2)%3]
        det -= matrice[0][i] * matrice[1][(i+2)%3] * matrice[2][(i+1)%3]
    return det


t = int(input(""))
desc = []
for i in range(t):
    xp, yp, xq, yq, xr, yr = map(int, input().split())
    desc.append((xp, yp, xq, yq, xr, yr))

for coord in desc:
    x = cal_det([[1, coord[0], coord[1]], [1, coord[2], coord[3]], [1, coord[4], coord[5]]])
    if x > 0:
        print("LEFT")
    elif x < 0:
        print("RIGHT")
    else:
        print("TOUCH")
