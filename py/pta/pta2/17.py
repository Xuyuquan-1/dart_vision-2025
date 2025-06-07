import math
def cal(n):
    t = 1
    for _ in range(n-1):
        t *= 10
    # print(f"t:{t}")
    for i in range(t, t*10):
        ret = judge(i, n)
        if ret == 0:
            continue
        print(ret)


def judge(n,x):
    t = n
    sum = 0
    while n:
        m = n%10
        sum = math.pow(m, x) + sum
        n //= 10
    # print(f"sum:{int(sum)}, t:{t}")
    if int(sum) == t:
        return int(sum)
    else:
        return 0

n = int(input())
cal(n)