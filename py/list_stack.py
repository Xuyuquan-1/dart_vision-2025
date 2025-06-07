l1 = []

x = int(input())

while x!=-1:
    l1.append(x)
    x = int(input())
while len(l1)!=0:
    x = l1.pop(0)
    print(x, end=' ')
