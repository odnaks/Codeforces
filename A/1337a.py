c = int(input())
for _ in range(c):
    str = input().split()
    a = int(str[0])
    b = int(str[1])
    c = int(str[2])
    d = int(str[3])
    # x_range = range(a, b+1)
    # y_range = range(b, c+1)
    # z_range = range(c, d+1)
    x = b
    y = c
    z = c
    # i_x = 0
    # i_y = 0
    # i_z = 0
    # print(x, y, z)
    # print("======x======")
    while (x + y <= z or x + z <= y or y + z <= x) and x >= a:
        x -= 1
        # print('x')
        # print(x, y, z)
    # print("======y======")
    while (x + y <= z or x + z <= y or y + z <= x) and y >= b:
        y -= 1
        # print('y')
        # print(x, y, z)
    # print("======z======")
    while (x + y <= z or x + z <= y or y + z <= x) and z <= d:
        z += 1
        # print(x, y, z)
        # print('z')
    print(x, y, z)

