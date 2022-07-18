w = input('請輸入體重(公斤):')
weight = int(w)
h = input('請輸入身高(公分):')
height = int(h) 
height = height / 100
bmi = weight / (height * height)
print('BMI值=', bmi)

if bmi < 18.5:
  print('太輕了')
elif bmi < 24:
  print('正常')
else:
  print('太重了')
