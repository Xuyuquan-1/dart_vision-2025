n = int(input("Please input n:\n"))
print(f"{n} = ", end = "")
while n != 1:
    for i in range(2, n+1):
        if n%i == 0 and i != n:
            print(f"{i}*", end = "")
        else:
            print(f"{i}", end = "")
        n = n//i
        break


