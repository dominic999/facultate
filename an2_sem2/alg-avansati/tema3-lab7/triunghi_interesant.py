from gettext import find


def find_lower_limits(punct, limite):
    st = 0
    dr = len(limite) - 1
    best_limit = None

    while st <= dr:
        mij = (dr+st)//2

        if punct <= limite[mij]:
            dr = mij - 1
        elif punct > limite[mij]:
            best_limit = limite[mij]
            st = mij + 1

    return best_limit
    

def find_upper_limits(punct, limite):
    st = 0
    dr = len(limite) - 1
    best_limit = None

    while st <= dr:
        mij = (dr+st)//2

        if punct < limite[mij]:
            best_limit = limite[mij]
            dr = mij - 1
        elif punct >= limite[mij]:
            st = mij + 1

    return best_limit

n = int(input())
lim_st = []
lim_dr = []
lim_sus = []
lim_jos = []


for i in range(n):
    a,b,c = map(int, input().split())
    if a == 0:
        y = -c / b
        if b > 0:
            lim_sus.append(y) 
        else:
            lim_jos.append(y)
           

    #asta inseamna ca ne uitam la x
    elif b == 0:
        x = -c / a
        if a > 0:
            lim_dr.append(x)
        else:
            lim_st.append(x)

lim_st.sort()
lim_sus.sort()
lim_dr.sort()
lim_jos.sort()


m = int(input())
puncte = []
for i in range(m):
    x,y = map(float, input().split())
    puncte.append((x, y))

for punct in puncte:
    limita_sus = find_upper_limits(punct[1], lim_sus)
    limita_jos = find_lower_limits(punct[1], lim_jos)
    limita_stanga = find_lower_limits(punct[0], lim_st)
    limita_dreapta = find_upper_limits(punct[0], lim_dr)
    if limita_dreapta is None or limita_stanga is None or limita_jos is None or limita_sus is None:
        print("NO")
        continue
    print("YES")
    aria = (limita_dreapta - limita_stanga) * (limita_sus - limita_jos)
    print(aria)




