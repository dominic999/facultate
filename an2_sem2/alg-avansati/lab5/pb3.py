def orientare(p1, p2, p3):
    return (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0])


n = int(input())
poligon = []
for i in range(n):
    x, y = map(int, input().split())
    poligon.append((x, y))

if n == 1:
    print(1)
    print(poligon[0][0], poligon[0][1])
    exit()

if n == 2:
    if poligon[0] == poligon[1]:
        print(1)
        print(poligon[0][0], poligon[0][1])
    else:
        print(2)
        print(poligon[0][0], poligon[0][1])
        print(poligon[1][0], poligon[1][1])
    exit()

start = 0
for i in range(n):
    if poligon[i] < poligon[start]:
        start = i

puncte = []
for i in range(n):
    puncte.append(poligon[(start + i) % n])

j = 2
while j < n and orientare(puncte[0], puncte[j - 1], puncte[j]) == 0:
    j += 1

if j == n:
    print(2)
    print(puncte[0][0], puncte[0][1])
    print(puncte[-1][0], puncte[-1][1])
    exit()

deque = [None] * (2 * n + 5)
st = n + 1
dr = n + 4

p0 = puncte[0]
p1 = puncte[j - 1]
p2 = puncte[j]

if orientare(p0, p1, p2) > 0:
    deque[st] = p2
    deque[st + 1] = p0
    deque[st + 2] = p1
    deque[st + 3] = p2
else:
    deque[st] = p2
    deque[st + 1] = p1
    deque[st + 2] = p0
    deque[st + 3] = p2

for i in range(j + 1, n):
    punct = puncte[i]

    if orientare(deque[st], deque[st + 1], punct) > 0 and orientare(deque[dr - 1], deque[dr], punct) > 0:
        continue

    while orientare(deque[st], deque[st + 1], punct) <= 0:
        st += 1
    st -= 1
    deque[st] = punct

    while orientare(deque[dr - 1], deque[dr], punct) <= 0:
        dr -= 1
    dr += 1
    deque[dr] = punct

hull = []
for i in range(st, dr):
    hull.append(deque[i])

rasp = [str(len(hull))]
for punct in hull:
    rasp.append(f"{punct[0]} {punct[1]}")

print("\n".join(rasp))
