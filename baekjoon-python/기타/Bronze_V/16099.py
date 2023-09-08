t = int(input())

for _ in range(t):
    lt, wt, le, we = map(int, input().split())

    tp_area = lt * wt
    ec_area = le * we

    if tp_area > ec_area:
        print('TelecomParisTech')
    elif tp_area < ec_area:
        print('Eurecom')
    else:
        print('Tie')