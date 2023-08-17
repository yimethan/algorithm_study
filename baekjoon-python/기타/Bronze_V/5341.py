while True:
    n = int(input())
    
    if n == 0:
        break
    
    res = n
    
    for i in range(1, n):
        res += i
        
    print(res)
        