a = [17, 5, 3, 11, 16, 10, 23, 6, 8]
swap = 0 
comp = 0

for i in range(1, 9):
    for j in range(9-i):
        comp = comp + 1
        if a[j] < a[j+1]:
            tmp = a[j]
            a[j] = a[j+1]
            a[j+1] = tmp
            swap = swap + 1

print(a)
print(comp)
print(swap)