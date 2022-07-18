s = [267,282,250,266,257]
max = s[0]
min = s[0]
for i in range(1,len(s)):
  if max < s[i]:
    max = s[i]
  if min > s[i]:
    min = s[i]

print('最大值:', max)
print('最小值:', min)



