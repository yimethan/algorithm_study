from collections import deque

n = int(input())

cards = deque([i for i in range(1, n+1)])

while True:
    
    if(len(cards) == 1):
        print(cards.popleft())
        exit()

    cards.popleft()
    cards.append(cards.popleft())