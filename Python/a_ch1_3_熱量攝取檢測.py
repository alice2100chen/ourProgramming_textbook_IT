calorie = int(input("請輸入這一餐的卡路里:"))
if calorie < 1600:
  print("熱量不足!")
elif calorie > 1900:
  print("熱量過度!")
else:
  print("熱量適中!")