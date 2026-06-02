class Fenwick:
    def __init__(self, n):
        self.n = n
        self.bit = [0] * (n+1)

    def add(self, poz, valoare):
        while poz <= self.n:
            self.bit[poz] += valoare
            poz += poz & (-poz)

    def sum(self, poz):
        s = 0
        while poz > 0:
            s += self.bit[poz]
            poz -= poz & (-poz)
        return s

    def interval(self, start, end):
        if start > end:
            return 0
        return self.sum(end) - self.sum(start - 1)

def find_lower_bound(values, v):
    st = 0
    dr = len(values)

    while st < dr:
        mij = (st + dr) // 2
        if values[mij] < v:
            st = mij + 1
        else:
            dr = mij

    return st


def find_upper_bound(values, v):
    st = 0
    dr = len(values)

    while st < dr:
        mij = (st + dr) // 2
        if values[mij] <= v:
            st = mij + 1
        else:
            dr = mij

    return st

n = int(input())
ys = []
events = []
END = 0
QUERY = 1
START = 2
for i in range(n):
    x,y,a,b = map(int, input().split())

    if x == a:
        low = min(y, b)
        high = max(y, b)
        events.append((x, QUERY, low, high))

    else:
        left = min(x, a)
        right = max(x, a)
        ys.append(y)
        events.append((left, START, y))
        events.append((right, END, y))

ys = sorted(set(ys))
events.sort(key=lambda event: (event[0], event[1]))
fen = Fenwick(len(ys))
intersectii = 0

for event in events:
    if event[1] == START:
        poz = find_lower_bound(ys, event[2]) + 1
        fen.add(poz, 1)
        continue
    elif event[1] == END:
        poz = find_lower_bound(ys, event[2]) + 1
        fen.add(poz, -1)
        continue 
    low = event[2]
    high = event[3]
    st = find_upper_bound(ys, low) + 1
    dr = find_lower_bound(ys, high)

    intersectii += fen.interval(st, dr)



print(intersectii)
