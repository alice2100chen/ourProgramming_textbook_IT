f = 77
# f = int(input())
c = (f-32) * (5/9)
print('攝氏:',c)
if c < 20:
  print('畫畫')
elif c < 24:
  print('彈琴')
elif c < 27:
  print('下棋')
elif c < 30:
  print('賞花')
else:
  print('水療SPA')