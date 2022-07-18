number =[66, 75, 76, 82, 84, 85, 68, 47, 92, 46]
n = int(input("請輸入號碼: "))
found = -1
for i in range(10): 
    if number[i] == n: 
        found = 0

if found == 0: 
    print("恭禧中獎")
else:
    print("銘謝惠顧")