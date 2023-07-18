n, b = map(int, input().split())

number = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

s = ''

while n:
    
    s += str(number[n % b])
    n //= b
    
print(s[::-1])