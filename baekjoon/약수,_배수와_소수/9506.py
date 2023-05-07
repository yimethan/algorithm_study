n, k = map(int, input().split())

yarr = []

for i in range(1, n+1):
    
    if n % i == 0: # 나눠떨어지면
        yarr.append(i)
        
if k > len(yarr):
    print(0)
else:
    print(yarr[k-1])