n = [1,8,6,2,5,4,8,3,7]
sortat = sorted(n)
maxim = sortat[len(n)-1] 
pozEnd = 1 
pozStart = 0
end = n[1]
start = n[0]
arie = min([start, end])
for i in range(2, len(n)):
    if min(start, n[i]) * (i-pozStart) > arie:
        end = n[i]
        pozEnd = i
        arie = min(start, end) * (i-n.index(start))
    
    if i < len(n)-1:
        if(min([n[i],n[i+1]]) >= arie):
            pozEnd = i+1
            pozStart = i
            start = n[i]
            end = n[i+1]
            arie =min([n[i],n[i+1]])  


print(arie) 