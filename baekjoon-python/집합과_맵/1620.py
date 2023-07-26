import sys

n, m = map(int, input().split())

dn = {}

for i in range(n):
    name = sys.stdin.readline().rstrip()
    
    dn[i] = name
    dn[name] = i
    
for _ in range(m):
    query = sys.stdin.readline().rstrip()
    
    if query.isdigit():
        print(dn[int(query) - 1])
    else:
        print(dn[query] + 1)