str = input()
arr = str.split()
n = int(arr[0])
t = int(arr[1])

x = (10 ** n - 1) // t
y = x * t
if (y == 0):
 print(-1)
 exit()
print(y)
