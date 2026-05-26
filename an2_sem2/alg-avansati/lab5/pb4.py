import math


def orientare(p1, p2, p3):
    return (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])


def distanta(p1, p2):
    return math.sqrt((p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]))


n = int(input())
puncte = []
for i in range(n):
    x, y = map(int, input().split())
    puncte.append((x, y, i))

puncte_sortate = sorted(puncte)

if n == 1:
    print(puncte[0][0], puncte[0][1])
    exit()

lower = []
for punct in puncte_sortate:
    while len(lower) >= 2 and orientare(lower[-2], lower[-1], punct) <= 0:
        lower.pop()
    lower.append(punct)

upper = []
for punct in reversed(puncte_sortate):
    while len(upper) >= 2 and orientare(upper[-2], upper[-1], punct) <= 0:
        upper.pop()
    upper.append(punct)

ciclu = lower[:-1] + upper[:-1]

if len(ciclu) == 0:
    ciclu = [puncte_sortate[0]]

folosit = [False] * n
for punct in ciclu:
    folosit[punct[2]] = True

ramase = n - len(ciclu)

while ramase > 0:
    cost_minim = None
    pozitie = -1
    punct_de_adaugat = None

    for punct in puncte:
        if folosit[punct[2]]:
            continue

        l = len(ciclu)
        for i in range(l):
            p1 = ciclu[i]
            p2 = ciclu[(i + 1) % l]
            cost = distanta(p1, punct) + distanta(punct, p2) - distanta(p1, p2)

            if cost_minim is None or cost < cost_minim:
                cost_minim = cost
                pozitie = i + 1
                punct_de_adaugat = punct

    ciclu.insert(pozitie, punct_de_adaugat)
    folosit[punct_de_adaugat[2]] = True
    ramase -= 1

start = 0
for i in range(1, len(ciclu)):
    if ciclu[i][0] < ciclu[start][0] or (ciclu[i][0] == ciclu[start][0] and ciclu[i][1] < ciclu[start][1]):
        start = i

rasp = []
for i in range(len(ciclu)):
    punct = ciclu[(start + i) % len(ciclu)]
    rasp.append(f"{punct[0]} {punct[1]}")

print("\n".join(rasp))
