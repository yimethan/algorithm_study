import sys

t = int(sys.stdin.readline())

for _ in range(t):
    
    stack = []
    
    st = sys.stdin.readline().rstrip()

    for i in st:
        
        if i == '(':
            stack.append(i)
        elif i == ')':
            if stack:
                stack.pop()
            else:
                stack.append(i)
                break
    
    if stack:
        print('NO')
    else:
        print('YES')