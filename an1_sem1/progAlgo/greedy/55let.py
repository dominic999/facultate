nums = [2,3,1,1,4]
x= 0 
def greedy(numere, x):
    i = len(numere)-1
    if(i == 0):
        print("da")
        return 0
    for j in range(i):
        if(numere[j] >= (i-j)):
            ok = greedy(numere[:j+1], x)
            print(ok)
            if(j == 0):
                return x+1
            else:
                if(ok != False):
                    return ok+1
                else:
                    return False

    return False
                    
print(greedy(nums, x))
