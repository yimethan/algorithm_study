n, m = map(int, input().split())
card = list(map(int, input().split()))

min_gap = m

for i in range(len(card)):
    for j in range(i+1, len(card)):
        for k in range(j+1, len(card)):
            if card[i] + card[j] + card[k] <= m:
                if min_gap > m - (card[i] + card[j] + card[k]):
                    min_gap = m - (card[i] + card[j] + card[k])
                    result = card[i] + card[j] + card[k]
                    
print(result)