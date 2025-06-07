import math
n = int(input())
for _ in range(n):
    sum = 0
    x,y = map(int, input().split())
    x,y = min(x,y), max(x,y)
    for i in range(x,y+1):
        if math.sqrt(i) == int(math.sqrt(i)):
            sum += i
    print(sum)
