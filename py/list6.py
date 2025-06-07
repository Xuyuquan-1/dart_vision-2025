l1 = [3 ,1, 6, 3, 3, 8, 4, 9, 5]
#l1.sort(reverse = True)
#print(l1)

l2 = []
for i in l1: 
    if i >= 6:
        l2.append(i * 10)
print(l2)


l3 = [i * 10 for i in l1 if i >= 6]
print(l3)

print(l1.count(3))
