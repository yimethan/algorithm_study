from collections import Counter

n = int(input())
known_input = list(map(int, input().split()))

m = int(input())
check_input = list(map(int, input().split()))

counter = Counter(known_input)

for i in check_input:
    if i in counter:
        print(counter[i], end=' ')
    else:
        print(0, end=' ')