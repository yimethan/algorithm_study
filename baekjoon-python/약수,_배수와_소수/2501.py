n = 0

while(1):
    n = int(input())
    if n == -1:
        break
    
    res = 0
    yarr = []
    for i in range(1, n):
        
        if n % i == 0: # 나눠떨어지면
            res += i
            yarr.append(i)

    if res == n:
        print(n, '=', yarr[0], end='')
        for j in range(1, len(yarr)):
            print(' +', yarr[j], end='')
        print()
    else:
        print(n, 'is NOT perfect.')