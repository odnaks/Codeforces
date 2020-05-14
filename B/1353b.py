c = int(input())
for _ in range(c):
    string1 = input().split()
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    n, k = int(string1[0]), int(string1[1])
    a.sort()
    b.sort()
    max = 0
    for i in range(k+1):
        new_sum = sum(a[i:]) + sum(b[n-i:])
        if new_sum > max:
            max = new_sum
    print(max)
