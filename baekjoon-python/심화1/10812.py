n, m = map(int, input().split())

basket = list(i for i in range(1, n+1))

for i in range(m):

    i, j, k = map(int, input().split())

    basket[i-1:j] = basket[k-1:j] + basket[i-1:k-1]

for i in basket:
    print(i, end=' ')