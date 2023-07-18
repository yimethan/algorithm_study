while True:
    
    a, b, c = map(int, input().split())
    if a == b == c == 0:
        break
    side = sorted([a, b, c])
        
    if side[2] >= side[0] + side[1]:
        print('Invalid')
        
    else:
        if a == b == c:
            print('Equilateral')
            
        elif a == b or b == c or a == c:
            print('Isosceles')
            
        else:
            print('Scalene')