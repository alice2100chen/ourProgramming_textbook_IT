beauty = ['西施','貂蟬','王昭君','楊貴妃','馮小憐','蘇妲己','趙飛燕','鄭旦','褒姒','甄宓']
c = len(beauty)               
t = input('請問芳名:')
found = -1
for i in range(c):
    if beauty[i] == t:          
        found = i
        print('發現搜尋目標',t,'位於清單中索引值為',found,'的位置') 

if found == -1:
    print('找不到!')