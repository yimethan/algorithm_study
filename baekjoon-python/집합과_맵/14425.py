n, m = map(int, input().split())
words = set()
count = 0

for _ in range(n):
    words.add(input())
for _ in range(m):
    if input() in words:
        count += 1
    
print(count)