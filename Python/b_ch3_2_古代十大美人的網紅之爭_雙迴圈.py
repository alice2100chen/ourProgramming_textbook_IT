beauty = ['西施','貂蟬','王昭君','楊貴妃','馮小憐','蘇妲己','趙飛燕','鄭旦','褒姒','甄宓']
vote = [78,62,86,70,12,16,38,15,22,13]
c = len(vote)          
for i in range(1,c):                      
    for j in range(c-i):
        if vote[j] > vote[j+1]:              
          t1 = vote[j]
          vote[j] = vote[j+1]
          vote[j+1] = t1
          t2 = beauty[j]
          beauty[j] = beauty[j+1]
          beauty[j+1] = t2
    print('第', i, '回合結果:',beauty)       

print('排序結束')