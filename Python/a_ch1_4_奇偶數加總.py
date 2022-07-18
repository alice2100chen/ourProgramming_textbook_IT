sum_odd=0
sum_even=0
n = int(input("請輸入數字:"))

for i in range(1, n+1):
  if i % 2 == 1:
    sum_odd = sum_odd + i
  else:
    sum_even = sum_even + i

print(sum_odd)
print(sum_even)