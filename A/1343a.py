# 21.04.20 @odnaks

c = int(input())
for _ in range(c):
    n = int(input())
    two = 3
    k = 1
    while n % two != 0:
        k += 1
        two += pow(2, k)
    print(n // two) 