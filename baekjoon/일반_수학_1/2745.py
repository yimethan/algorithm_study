n, b = input().split()

number = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
b = int(b)

res = 0

for i in range(len(n)):
    
    idx = number.find(n[i])
    res += idx * (b ** (len(n) - 1 - i))
    
print(res)