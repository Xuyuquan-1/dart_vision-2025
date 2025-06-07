x, y = map(float, input().split())
for i in range(int(y)+1):
    print(f"{x:.1f}**{i:d}={x**i:.2f}")