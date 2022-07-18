s=[[92,87,82,56],[88,82,77,62],[52,71,48,68]]
found = 0
for i in range(len(s)):
  for j in range(len(s[0])):
    if s[i][j] < 60:
      found = found + 1

print('不及格次數:', found)



