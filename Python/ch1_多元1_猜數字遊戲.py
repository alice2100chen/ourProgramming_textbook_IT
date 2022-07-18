correct =7
g = input()
guess = int(g)
if guess == correct:
  print('恭喜你猜對了!')
elif guess < correct:
  print('猜的數字太小了')
else:
  print('猜的數字太大了')