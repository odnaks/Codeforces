# возвращает индекс i, где ns[i] <= x <= ns[i+1] 
def mini_bin_search(ns, x):
    begin = 0
    end = len(ns)
    i = len(ns) // 2
    while begin != end:
        if ns[i] <= x:
            begin = i + 1
            i = (end - begin) // 2 + begin
        else:
            end = i
            i = (end - begin) // 2 + begin
    return(begin)

n = int(input())
string = input().split()
ns = []
for i in range(n):
    ns.append(int(string[i]))
ns.sort()
m = int(input())
for _ in range(m):
    a = int(input())
    # i = 0
    # while i < n and a >= ns[i]:
    #     i += 1
    # print(f" i = {i}, new_i = {mini_bin_search(ns, a)}")
    i = mini_bin_search(ns, a)
    if i > 0:
        if i < n:
            if (abs(ns[i - 1] - a) < abs(ns[i] - a)):
                print(ns[i - 1])
            else:
                print(ns[i])
        else:
            print(ns[i - 1])
    else:
        print(ns[0])