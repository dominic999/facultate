def calcul(a, b = 0):
    if a == 0 and b == 0:
        return 1
    if a > 0:
        return 1 + calcul(a//10, 1)    
    else:
        return 0
   

def invers(a, oglindit=0):
    if a > 0:
        oglindit*=10
        oglindit+=a%10
        
        return invers(a//10, oglindit)
    else:
        return oglindit
    

