from collections import deque

n = int(input())

line = deque(map(int, input().split()))

wait = []

turn = 1

while line:
    
    if line[0] == turn:
        line.popleft()
        turn += 1
    else:
        wait.append(line.popleft())
        
    while wait and wait[-1] == turn:
        wait.pop()
        turn += 1
        
if wait:
    print("Sad")
else:
    print("Nice")