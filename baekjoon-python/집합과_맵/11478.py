s = input()

s_set = set()

for _ in range(len(s)):
    for i in range(len(s) - _):
        s_set.add(s[i:i + _ + 1])
        
print(len(s_set))