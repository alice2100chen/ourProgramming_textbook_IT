a = [3,6,1,8,4,5,7,2]
found = 0
w = input()
k = int(w)
for i in range(len(a)):
  if a[i] == k:
    print('找到了，在第',i,'個索引')
    found = 1;
    break;

if found == 0:
  print('找不到')