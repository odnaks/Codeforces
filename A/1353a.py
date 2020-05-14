n = int(input())

for _ in range(n):
    string = input().split()
    n, m = int(string[0]), int(string[1])
    if (n == 1):
        print(0)
    elif n < 3:
        print(m)
    else:
        print(m * 2)
        