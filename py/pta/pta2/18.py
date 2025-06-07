def gcd(m, n):
    while 1:
        m %= n
        if m == 0:
            return n
        m, n = n, m


def lcm(m, n):
    return int(m*n / gcd(m, n))

while 1:
    try:
        x, y = map(int, input().split())
        gc = gcd(x, y)
        lc = lcm(x, y)
        print(f"{gc} {lc}")
    except:
        break



