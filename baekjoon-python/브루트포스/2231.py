n = int(input())

for i in range(1, n+1):
    if n == i + sum(map(int, str(i))):
        print(i)
        break
    if n == i:
        print(0)