a = [3, 8, 4, 2, 5, 7]
for i in range(1, 6):
  for j in range(6-i):
    if a[j] < a[j+1]:
      tmp = a[j]
      a[j] = a[j+1]
      a[j+1] = tmp
  print('第',i,'回合結果:', end='')
  for k in range(6):
    print(a[k], end='')
  print()