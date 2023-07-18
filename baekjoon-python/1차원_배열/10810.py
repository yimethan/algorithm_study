n, m = map(int, input().split())

baskets = []
for i in range(n):
    baskets.append(0)

for attempt in range(m):

    i, j, k = map(int, input().split())

    for b in range(i, j+1):
        baskets[b-1] = k

for i in range(n):

    print(baskets[i], end=' ')