m = int(input())

xlist, ylist = [], []

for _ in range(m):
    
    x, y = map(int, input().split())
    
    xlist.append(x)
    ylist.append(y)
    
print((max(xlist) - min(xlist)) * (max(ylist) - min(ylist)))