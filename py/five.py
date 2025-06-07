mes1 = "hello \nworld!"
mes2 = "\rworld!"
print(mes1)
print(mes2)


name = "zhangsan"
address = "sdut"
print("name: %s  address: %s"%(name, address))
print("name: {0}  address: {1}" .format(name, address))
print(f"name: {name}  address: {address}")

PI = 3.1415926
n1, n2, n3 = input("num = ?").split(" ")
print("-------------------")
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)

print(f"{n1}, {n2}, {n3}")



str = "hello world!"
print(str[1:6:1])
print(str[1:6:2])
print(str[6:1:-1])
print(str[-1:-6:-1])


username = "zhangsan"
str = input("Please Input Username: ")
if(str == username):
    print(f"Welcome {str} !")
else:
    print(f"Undefine Behavior!")

