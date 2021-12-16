def d(n):
    res = n
    while(n!=0):
        res += n % 10
        n /= 10
    return res

check = []
for i in range(1, 10001):
    check.append(d(i))
    if i not in check:
        print(i)