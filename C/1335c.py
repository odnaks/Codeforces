from collections import Counter

c = int(input())
for _ in range(c):
    n = int(input())
    str = input().split()
    c = Counter()
    for i in range(len(str)):
        c[str[i]] += 1
    c = dict(c.most_common())
    i_max = list(c)[0]
    a = c[i_max]
    b = len(c)
    if a == b:
        print(a - 1)
    else:
        print(min(a, b))

