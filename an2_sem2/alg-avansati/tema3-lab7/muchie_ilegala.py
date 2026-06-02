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

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
c = [int(x) for x in input().split()]
d = [int(x) for x in input().split()]

abc = [
        [a[0], a[1], 1],
        [b[0], b[1], 1],
        [c[0], c[1], 1]
        ]

abcd = [
        [a[0], a[1], a[0]**2 + a[1]**2 ,1],
        [b[0], b[1], b[0]**2 + b[1]**2 ,1],
        [c[0], c[1], c[0]**2 + c[1]**2 ,1],
        [d[0], d[1], d[0]**2 + d[1]**2 ,1],
        ]

det_abcd = calc_det(abcd)
det_abc = calc_det(abc)

#asta inseamna ca este viraj la stanga
if det_abc > 0:
    if det_abcd > 0:
        print("AC: ILLEGAL")
        print("BD: LEGAL")
    elif det_abcd == 0:
        print("AC: LEGAL")
        print("BD: LEGAL")
    else: 
        print("AC: LEGAL")
        print("BD: ILLEGAL")

elif det_abc < 0:
    if det_abcd < 0:
        print("AC: ILLEGAL")
        print("BD: LEGAL")
    elif det_abcd == 0:
        print("AC: LEGAL")
        print("BD: LEGAL")
    else: 
        print("AC: LEGAL")
        print("BD: ILLEGAL")


