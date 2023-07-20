a, b = map(int, input().split()) # f(x) = ax + b, g(x) = x
c = int(input())
n = int(input())


if a * n + b <= c * n and a <= c:
    print(1)
else:
    print(0)