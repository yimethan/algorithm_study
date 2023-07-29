from math import gcd

n = int(input())

gap = []

init = int(input())

for _ in range(n-1):
    inp = int(input())
    gap.append(inp - init)
    init = inp

g = gap[0]

for _ in range(1, len(gap)):
    g = gcd(g, gap[_])

cnt = 0

for _ in gap:
    cnt += _ // g - 1
    
print(cnt)