def min_del(x):
    for i in range(2, x + 1):
        if x % i == 0:
            return i

n = int(input())
for _ in range(n):
    string = input().split()
    n = int(string[0])
    k = int(string[1])
    print(n + min_del(n) + 2 * (k - 1))
    # for _ in range(k):touch
    #     n = n + min_del(n)
    # print(n)
