n, m = map(int, input().split())

a_set = set(map(int, input().split()))
b_set = set(map(int, input().split()))

a_b = a_set - b_set
b_a = b_set - a_set
new_set = a_b | b_a

print(len(new_set))