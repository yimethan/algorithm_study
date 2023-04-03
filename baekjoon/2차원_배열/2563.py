paper_num = int(input())

big_paper = [[0 for j in range(100)] for i in range(100)]

for _ in range(paper_num):
    
    x, y = map(int, input().split())
    
    for i in range(x, x+10):
        for j in range(y, y+10):
            
            big_paper[i][j] = 1
            
count = 0
            
for i in range(100):
    for j in range(100):
            
        if big_paper[i][j] == 1:
            
            count += 1
            
print(count)