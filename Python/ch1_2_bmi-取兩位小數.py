w = input()
weight = int(w)
h = input()
height = int(h) 
height = height / 100
bmi = weight / (height * height)
bmi = round(bmi * 100) / 100
print(bmi)