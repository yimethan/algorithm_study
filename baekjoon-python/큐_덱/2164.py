n = int(input())
card = list(range(1, n+1))

while len(card) != 1:
    card.pop(0)
    num = card.pop(-1)
    card.append(num)

print(card[0])

# 시간 초과