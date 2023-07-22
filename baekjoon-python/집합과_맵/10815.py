n = int(input())
have = list(map(int, input().split()))
m = int(input())
new = list(map(int, input().split()))

have.sort()

def binary_search(array, target, start, end):
    if start > end:
        return 0
    mid = (start + end) // 2
    if array[mid] == target:
        return 1
    elif array[mid] > target:
        return binary_search(array, target, start, mid-1)
    else:
        return binary_search(array, target, mid+1, end)
    
for i in new:
    print(binary_search(have, i, 0, n-1), end=' ')