n = int(input())
for _ in range(n):
    cnt = 0
    lis = [int(num) for num in input().split() if True]
    del lis[0]
    for i in range(len(lis)-1):
        for j in range(len(lis) - i - 1):
            if lis[j] > lis[j+1]:
                lis[j], lis[j+1] = lis[j+1], lis[j]
                cnt += 1
    print(cnt)
