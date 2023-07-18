c = int(input())

for i in range(c):

    score = list(map(int, input().split()))
    avg = sum(score[1:]) / score[0]
    count=0

    for i in score[1:]:

        if avg<i: count+=1

    rate = count / score[0] * 100
    print("%.3f%%" %(rate))