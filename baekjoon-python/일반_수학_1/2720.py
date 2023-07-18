t = int(input())

coins = [25, 10, 5, 1]
count = []

for test in range(t):
    
    c = int(input())
    
    for coin_idx in range(len(coins)):
        
        count.append(c // coins[coin_idx])
        c %= coins[coin_idx]
        
    for cnt in count:
        
        print(cnt, end=' ')
    count = []
    print()
    