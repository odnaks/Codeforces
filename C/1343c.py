# 21.04.20 @odnaks

import math

c = int(input())
for _ in range(c):
    n = int(input())
    str = input().split()
    arr = []

    if int(str[0]) > 0:
        now = 1
    else:
        now = 0
    max_now = int(str[0])
    sum = 0
    for i in range(1, n):
        if int(str[i]) > 0:
            tmp = 1
        else:
            tmp = 0
        if tmp != now:
            sum += max_now
            now = tmp
            max_now = -math.inf
        if int(str[i]) > max_now:
            max_now = int(str[i])
    print(sum + max_now)
