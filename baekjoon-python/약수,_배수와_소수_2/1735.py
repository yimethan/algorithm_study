a, b = map(int, input().split())
c, d = map(int, input().split())

def GCD(a, b):
    while b != 0:
        a = a % b
        a, b = b, a
    
    return a

m = GCD(a * d + b * c, b * d)

print((a * d + b * c) // m, b * d // m)