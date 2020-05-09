c = int(input())
for _ in range(c):
    str = input().split()
    n = int(str[0])
    k = int(str[1])
    if k * n % (n - 1) == 0:
        print(k * n // (n - 1) - 1)
    else:
        print(k * n // (n - 1))
