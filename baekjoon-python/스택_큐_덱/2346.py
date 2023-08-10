import sys
from collections import deque

n = int(sys.stdin.readline())

deq = deque(enumerate(map(int, input().split())))

res = []

while deq:
    
    idx, p = deq.popleft()
    res.append(idx + 1)
    
    if p > 0:
        deq.rotate(-(p - 1))
    else:
        deq.rotate(-p)
        
for i in res:
    print(i, end=' ')