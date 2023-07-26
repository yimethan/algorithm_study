n = int(input())

log = set()

for _ in range(n):
    name, action = input().split()
    if action == 'enter':
        log.add(name)
    else:
        log.remove(name)
        
for name in sorted(log, reverse=True):
    print(name)