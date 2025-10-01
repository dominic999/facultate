g = [1, 2]
s = [1,2,3]
counter = 0
for i in range(min([len(g), len(s)])):
    while(i < len(g) and g[i] > s[i] and len(g) > 0):
        g.remove(g[i])
    if(i < len(g) and g[i] <= s[i]):
        counter += 1
print(counter)