import sys

t = int(input())

for _ in range(t):
    a, b = map(int, sys.stdin.readline().strip().split())
    
    a1, b1 = a, b
    
    while b1 != 0:
        a1 = a1 % b1
        a1, b1 = b1, a1
    
    print(a * b // a1)