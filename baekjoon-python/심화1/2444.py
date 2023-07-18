n = int(input())

star = 1
space = n-1

for i in range(n):

    for j in range(space):
        print(' ', end='')
    for j in range(star):
        print('*', end='')
    print()

    star += 2
    space -= 1

space = 1
star = n * 2 - 3

for i in range(n-1):

    for j in range(space):
        print(' ', end='')
    for j in range(star):
        print('*', end='')
    print()

    space += 1
    star -= 2