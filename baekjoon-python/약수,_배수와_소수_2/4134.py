t = int(input())

def is_prime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

for _ in range(t):
    n = int(input())
    
    while True:
        if n == 1 or n == 0:
            print(2)
            break
        if is_prime(n):
            print(n)
            break
        else:
            n += 1
        
# 에라토스테네스의 체