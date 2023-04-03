strs = [[0] * 15 for i in range(5)]

for i in range(5):
    
    str_in = list(input())
    str_len = len(str_in)
    
    for j in range(str_len):
        
        strs[i][j] = str_in[j]
        
for i in range(15):
    
    for j in range(5):
        
        if strs[j][i] != 0:
            
            print(strs[j][i], end='')