nums = []
res = 0

for _ in range(5):
    n = int(input())
    nums.append(n)
    res += n  
    
nums.sort()

print(res//5)
print(nums[2])