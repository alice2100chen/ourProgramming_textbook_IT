h = int(input())
c = int(input())
s = int(input())
t = c - (h / 1000) * 6 - (s ** 0.5)
t = round(t * 100) / 100
print(t)