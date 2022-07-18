life = [50, 62, 55, 64, 70, 50, 80, 71, 52]
sum = 0
num = len(life)
for i in range(num):
  sum = sum + life[i]

average = sum / num
print('平均:',average)