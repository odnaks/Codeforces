c = int(input())
for _ in range(c):
    str = input().split()
    n = int(str[0])
    k = int(str[1])

    if k % 2 == 0:
        if n % 2 == 0:
            if k <= n:
            # вроде все равно
                print("YES")
                for i in range(k):
                    if i + 1 != k:
                        print(1, end = " ")
                    else:
                        print(n - k + 1, end = "")
            else:
                print("NO")
                continue
        else:
            print("NO")
            continue
    else:
        if n % 2 == 1:
            if k <= n:
                print("YES")
                for i in range(k):
                    if i + 1 != k:
                        print(1, end = " ")
                    else:
                        print(n - k + 1, end = "")
            else:
                print("NO")
                continue
            # нужный нечетные числа
        else:
            if k * 2 <= n:
                # нужны четные
                print("YES")
                for i in range(k):
                    if i + 1 != k:
                        print(2, end = " ")
                    else:
                        print(n - 2 * (k - 1), end = "")
            else:
                print("NO")
                continue
    print()
            
