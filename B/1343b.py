# 21.04.20 @odnaks

c = int(input())
for _ in range(c):
    n = int(input())
    if (n % 4 == 0):
        arr = []
        count_chet = n // 2
        i_ch = 1
        for _ in range(count_chet // 2):
            arr.append(2 * i_ch)
            arr.append(2 * (i_ch + 2))
            i_ch += 3
        i_ch = 1
        for _ in range(count_chet // 2):
            arr.append(2 * i_ch + 1)
            arr.append(2 * (i_ch + 1) + 1)
            i_ch += 3
        print("YES")
        print(" ".join(str(x) for x in arr))
    else:
        print("NO")