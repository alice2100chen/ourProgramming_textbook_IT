score = [90,86,92]
sum = 0 
for i in range(len(score)):
  sum = sum + score[i]

average = sum / len(score)
average = round(average * 100) /100
print(average)