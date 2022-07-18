for i in range(1,10):
   print('1','*',i,'=',1*i)

for j in range(1,10):
  for i in range(1,10):
    print(j,'*',i,'=',j*i)

for j in range(1,10):
  for i in range(1,10):
    print(j,'*',i,'=',j*i, end='\t')
  print()