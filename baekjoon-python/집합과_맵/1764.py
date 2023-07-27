import sys

n, m = map(int, input().split())

known = set()
not_known = set()

for _ in range(n):
    known.add(input())
    
for _ in range(m):
    inp = sys.stdin.readline().rstrip()
    if inp in known:
        not_known.add(inp)

not_known = list(not_known)
print(len(not_known))

for _ in sorted(not_known):
    print(_)