while 1:
    try:
        n = int(input())
        for i in range(1, n+1):
            for j in range(1, i+1):
                if j == i:
                    print(f"{j}*{i}={j*i}", end = "")
                else:
                    print(f"{j}*{i}={j*i}", end = " ")
            print()
    except:
        break                                     
                                                 


