list1 = list(range(100))
print(list1)
list1.pop(3)
print(list1)
list1.remove(80)
print(list1)
list1.clear()
if 80 in list1:
    print("have 80")
else:
    print("no 80")

