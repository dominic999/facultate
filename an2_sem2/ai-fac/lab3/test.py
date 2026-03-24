from heapq import heappop, heappush, heapify

h = []
heapify(h)

lista = [2,1,4,10,12]
for i in lista:
    heappush(h, i)
    print(h)
