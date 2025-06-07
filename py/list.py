list1 = [1,2,3,"ok",12.09, [6,7,9]]
print(list1[5][1])
list2 = []
list2.append("yes")
list2.append(20)
print(list2)
list2.insert(1,123)
print(list2)
list2.extend(["A", "B", "C"])
list2.extend(list1)
print(list2)

