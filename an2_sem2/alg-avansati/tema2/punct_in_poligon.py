def on_segment(a, b, p):
    return (
        orientare(a, b, p) == 0 and
        min(a[0], b[0]) <= p[0] <= max(a[0], b[0]) and
        min(a[1], b[1]) <= p[1] <= max(a[1], b[1])
    )


def orientare(p0, pi, p):
    return (pi[0] - p0[0]) * (p[1] - p0[1]) - (pi[1] - p0[1]) * (p[0] - p0[0])


def aria_poligon(poligon):
    s = 0
    n = len(poligon)

    for i in range(n):
        x1, y1 = poligon[i]
        x2, y2 = poligon[(i + 1) % n]
        s += x1 * y2 - y1 * x2

    return s


def bin_search(poligon, p):
    left = 1
    right = len(poligon) - 1

    while right - left > 1:
        mid = (left + right) // 2

        if orientare(poligon[0], poligon[mid], p) >= 0:
            left = mid
        else:
            right = mid

    return left


def main():
    n = int(input())
    poligon = []

    for i in range(n):
        x, y = map(int, input().split())
        poligon.append((x, y))

    if aria_poligon(poligon) < 0:
        poligon.reverse()

    p0 = min(poligon)
    idx_minim_p0 = poligon.index(p0)
    poligon = poligon[idx_minim_p0:] + poligon[:idx_minim_p0]
    p0 = poligon[0]

    m = int(input())
    puncte = []

    for i in range(m):
        x, y = map(int, input().split())
        puncte.append((x, y))

    for p in puncte:
        if p == p0:
            print("BOUNDARY")
            continue

        if on_segment(p0, poligon[1], p):
            print("BOUNDARY")
            continue

        if on_segment(poligon[-1], p0, p):
            print("BOUNDARY")
            continue

        if orientare(p0, poligon[1], p) < 0:
            print("OUTSIDE")
            continue

        if orientare(p0, poligon[-1], p) > 0:
            print("OUTSIDE")
            continue

        left = bin_search(poligon, p)

        if left == len(poligon) - 1:
            print("OUTSIDE")
            continue

        a = orientare(p0, poligon[left], p)
        b = orientare(poligon[left], poligon[left + 1], p)
        c = orientare(poligon[left + 1], p0, p)

        if on_segment(poligon[left], poligon[left + 1], p):
            print("BOUNDARY")
        elif a == 0:
            if on_segment(p0, poligon[left], p):
                if orientare(poligon[left - 1], poligon[left], p) == 0:
                    print("BOUNDARY")
                else:
                    print("INSIDE")
            else:
                print("OUTSIDE")
        elif c == 0:
            if on_segment(p0, poligon[left + 1], p):
                if left + 2 < len(poligon) and orientare(poligon[left + 1], poligon[left + 2], p) == 0:
                    print("BOUNDARY")
                else:
                    print("INSIDE")
            else:
                print("OUTSIDE")
        elif b > 0:
            print("INSIDE")
        else:
            print("OUTSIDE")


if __name__ == "__main__":
    main()
