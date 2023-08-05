from collections import deque
import sys

queue = deque()

n = int(sys.stdin.readline())

for _ in range(n):
    
    command = sys.stdin.readline().split()
    
    if command[0] == 'push':
        queue.append(command[1])
    elif command[0] == 'pop':
        print(queue.popleft()) if queue else print(-1)
    elif command[0] == 'size':
        print(len(queue))
    elif command[0] == 'empty':
        print(0) if queue else print(1)
    elif command[0] == 'front':
        print(queue[0]) if queue else print(-1)
    elif command[0] == 'back':
        print(queue[-1]) if queue else print(-1)