nums = [1,4,3,2]
nums.sort()
perechi = []
for i in range(0,len(nums)-1,2):
    perechi.append((nums[i],nums[i+1]))
    sum = 0
for i in range(len(perechi)):
    print(perechi[i])
    sum+=min(perechi[i])
print(sum)