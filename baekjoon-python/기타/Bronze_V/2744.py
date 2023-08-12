line = input()

for _ in line:
    if _.isupper():
        print(_.lower(), end='')
    else:
        print(_.upper(), end='')