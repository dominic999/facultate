n = int(input())
puncte = []
for i in range(n):
    x, y = map(int, input().split())
    puncte.append((x,y))

minim_x = min(puncte)
maxim_x = max(puncte)
idx_minim_x = puncte.index(minim_x)
idx_maxim_x = puncte.index(maxim_x)

minim_y = min(puncte, key=lambda punct: (punct[1], punct[0]))
maxim_y = max(puncte, key=lambda punct: (punct[1], punct[0]))
idx_minim_y = puncte.index(minim_y)
idx_maxim_y = puncte.index(maxim_y)


ok = True

i = idx_minim_x
while i != idx_maxim_x:
    ac = puncte[i]
    urm = puncte[(i+1)%n]

    if urm[0] < ac[0]:
        ok = False
        break

    i = (i+1)%n

i = idx_maxim_x
while i != idx_minim_x:
    ac = puncte[i]
    urm = puncte[(i+1)%n]

    if urm[0] > ac[0]:
        ok = False
        break

    i = (i+1)%n

print('YES' if ok else "NO")

ok = True
i = idx_minim_y
while i != idx_maxim_y:
    ac = puncte[i]
    urm = puncte[(i+1)%n]

    if urm[1] < ac[1]:
        ok = False
        break

    i = (i+1)%n


i = idx_maxim_y
while i != idx_minim_y:
    ac = puncte[i]
    urm = puncte[(i+1)%n]

    if urm[1] > ac[1]:
        ok = False
        break

    i = (i+1)%n

print('YES' if ok else "NO")
