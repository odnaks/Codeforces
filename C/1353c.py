c = int(input())
for _ in range(c):
    n = int(input())
    lines = n // 2
    sum = 0
    for i in range(1, lines + 1):
        sum += 8 * i * i
    print(sum)