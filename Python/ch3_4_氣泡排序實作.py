a = [3,2,4,5,1]
for i in range(1, 5):
  for j in range(5-i):
    if a[j] > a[j+1]:
      tmp = a[j]
      a[j] = a[j+1]
      a[j+1] = tmp
  print('第',i,'回合結果:', end='')
  for k in range(5):
    print(a[k], end='')
  print()