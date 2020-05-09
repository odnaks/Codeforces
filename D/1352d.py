c = int(input())
for _ in range(c):
    n = int(input())
    string = input().split()
    alisa = 0
    i_alisa = 0
    bob = 0
    i_bob = n - 1
    count = 0
    tmp_alisa = 0
    tmp_bob = 0
    while i_alisa <= i_bob:
        # tmp_alisa = 0
        # tmp_bob = 0
        # if i_alisa <= i_bob:
        #     count += 1
        tmp_alisa = 0
        # print(i_alisa, i_bob, count)
        while tmp_alisa <= tmp_bob and i_alisa <= i_bob:
            tmp_alisa += int(string[i_alisa])
            i_alisa += 1
        # print(i_alisa, i_bob, count)
        count += 1
        alisa += tmp_alisa
        if tmp_alisa <= tmp_bob or i_alisa > i_bob:
            break
        # if i_bob >= i_alisa:
        #     count += 1
        tmp_bob = 0
        # print(i_alisa, i_bob, count)
        while tmp_bob <= tmp_alisa and i_bob >= i_alisa:
            tmp_bob += int(string[i_bob])
            i_bob -= 1
        # print(i_alisa, i_bob, count)
        count += 1
        bob += tmp_bob
        if tmp_bob <= tmp_alisa or i_alisa > i_bob:
            break
    print(f"{count} {alisa} {bob}")