# -*- coding: utf-8 -*-
"""ch3-學習單-清倉拍賣.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1FWtbm9i329YR4upo8Ks1y0f0LIXzJ6lF
"""

item = ['水壺','麵包機','行李箱','咖啡機']
price = [100,1000,600,3000]
name = input()
for i in range(4):
  if name == item[i]:
    print('找到:',item[i])
    print('售價:',price[i])