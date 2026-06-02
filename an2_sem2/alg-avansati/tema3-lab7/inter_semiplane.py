xmin = float('-inf')
xmax = float('inf')
ymin = float('-inf')
ymax = float('inf')

n = int(input())
for i in range(n):
    a, b, c = map(int, input().split())
    #asta inseamna ca ne uitam la y
    if a == 0:
        y = -c / b
        if b > 0:
            ymax = min(y, ymax)
        else:
            ymin = max(y, ymin)

    #asta inseamna ca ne uitam la x
    elif b == 0:
        x = -c / a
        if a > 0:
            xmax = min(x, xmax)
        else:
            xmin = max(x, xmin)

if xmin > xmax or ymin > ymax:
    print("VOID")
elif xmin != float('-inf') and xmax != float('inf') and ymin != float('-inf') and ymax != float('inf'):
    print("BOUNDED")
else:
    print("UNBOUNDED")
