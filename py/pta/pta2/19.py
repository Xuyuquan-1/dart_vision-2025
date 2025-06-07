x = 1
y = 1
n = int(input())
while True:
    x = x+y
    x, y = y, x
    if y >= n:
        break
print(y)