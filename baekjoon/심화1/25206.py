rate = ['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0', 'F', 'P']
grade = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0, 0]

hj_sum = 0
hjxpj_sum = 0

for i in range(20):

    subject, gp, hj = input().split()

    gp = float(gp)
    if hj != 'P':
        hj_sum += gp
        hjxpj_sum += gp * grade[rate.index(hj)]

print('{:.6f}'.format(hjxpj_sum/hj_sum))