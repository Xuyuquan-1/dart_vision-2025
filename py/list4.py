list1 = list(range(10, 110, 10))
print(list1)
x = int(input("x = ?"))
if x in list1:
    print(list1.index(x) )
else:
    print(f"{x} not exist! ")



