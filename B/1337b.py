c = int(input())
for _ in range(c):
    str = input().split()
    x = int(str[0])
    n = int(str[1])
    m = int(str[2])
    while x > 20 and n > 0:
        x = x // 2 + 10
        n -= 1
        # print(x)
    while x > 0 and m > 0:
        x = x - 10
        m -= 1
        # print(x)
    if (x <= 0):
        print("YES")
    else:
        print("NO")
