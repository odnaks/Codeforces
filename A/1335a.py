count = int(input())

for _ in range(count):
    n = int(input())
    an = n // 2
    if n % 2 == 0:
        an -= 1
    print(an)
