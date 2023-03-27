s = input()

s_len = len(s)

flag = 1

for i in range(s_len):

    if(s[i] != s[-(i+1)]):
        flag = 0
        break;

print(flag)