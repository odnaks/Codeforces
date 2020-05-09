c = int(input())
for _ in range(c):
    i = 0
    n = int(input())
    count = 0
    dev = []
    while n > 0:
        d = n % 10
        if (d != 0):
            count += 1
            dev.append(d * (10**i))
        n //= 10
        i += 1
    print(count)
    for i in range(count):
        print(dev[i], end=" ")
    print()