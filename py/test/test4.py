for i in [10, 20, 30]:
    print(i)


for i in "python":
    print(i)


#左闭右开
list1 = list(range(3,10))
print(list1)


list2 = list(range(10, 0, -1))
print(list2)


x = "666"
for _ in range(10):
    print(x)

n = int(input("输入n\n"))
for i in range(1, n+1):
    for k in range(1, n-i+1):
        print(" ", end = "")
    for j in range(1, 2*i):
        print("*",end = "") 
    print("\n")

print("\n")


for i in range(n, 0, -1):
    for k in range(1, n-i+1):
        print(" ", end = "")
    for j in range(2*i-1, 0, -1):
        print("*", end = "")
    print("\n")


