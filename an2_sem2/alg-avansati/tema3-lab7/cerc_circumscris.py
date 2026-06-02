def calc_det(matrice: list[list[int]]):
    l_matrice = len(matrice[0])
    s = 0
    coloana = 0

    if l_matrice == 2:
        s = matrice[0][0] * matrice[1][1] - (matrice[0][1] * matrice[1][0])
        return s
    
    else:
        for i in range(l_matrice):
            submatirce = [rand[:i] + rand[i+1:] for rand in matrice[1:]]
            s += ((-1) ** i) * matrice[0][i] * calc_det(submatirce)
    return s



puncte_triunghi = []
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
c = [int(x) for x in input().split()]

m = int(input())

puncte_interioare = []
for i in range(m):
    x,y = map(int, input().split())
    puncte_interioare.append((x,y))


for punct in puncte_interioare:
    matrice = [
            [a[0], a[1], a[0]**2 + a[1]**2, 1],
            [b[0], b[1], b[0]**2 + b[1]**2, 1],
            [c[0], c[1], c[0]**2 + c[1]**2, 1],
            [punct[0], punct[1], punct[0]**2 + punct[1]**2, 1],
            ]
    determinant = calc_det(matrice)

    if determinant > 0:
        print("INSIDE")
    elif determinant < 0:
        print("OUTSIDE")
    else:
        print("BOUNDARY")

