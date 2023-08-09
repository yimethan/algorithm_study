from math import gcd
import sys

n = int(sys.stdin.readline())

gap = []

init = int(sys.stdin.readline())

for _ in range(n-1):
    inp = int(sys.stdin.readline())
    gap.append(inp - init)
    init = inp

g = gap[0]

for _ in range(1, len(gap)):
    g = gcd(g, gap[_])

cnt = 0

for _ in gap:
    cnt += _ // g - 1
    
print(cnt)