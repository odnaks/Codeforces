n = int(input())
matrix = [[0 for _ in range(n)] for _ in range(n)]
using = []
for i in range(n):
    string = input().split()
    for j in range(n):
        value = int(string[j])
        if (value != 0):
            matrix[i][j] = value
            using.append(value)

a = 1
for i in range(n):
    for j in range(n):
        if matrix[i][j] == 0:
            while (a in using):
                a += 1
            print(a, end="")
            a += 1
        else:
            print(matrix[i][j], end="")
        if (j + 1 != n):
            print(" ", end="")
    print()
