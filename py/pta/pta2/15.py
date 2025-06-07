n = int(input())
sum = 0.0
for i in range(1, n+1):
    sum += float(i)/float(2*i-1)*(-1)**(i+1)
print("{:.3f}".format(sum))