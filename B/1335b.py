c = int(input())
for _ in range(c):
    str = input().split()
    n = int(str[0])
    a = int(str[1])
    b = int(str[2])
    ans = ""
    for i in range(n):
        ans += chr((i % b) + 97)
    print(ans)

