n, m = map(int, input().split())

basket = list(range(1, n+1))

for att in range(m):

    i, j = map(int, input().split())

    temp = basket[i-1]
    basket[i-1] = basket[j-1]
    basket[j-1] = temp

for i in range(len(basket)):

    print(basket[i], end=' ')