# 10.03.20 @odnaks
str = input()
arr = str.split()
n = int(arr[0])
k = int(arr[1])

for i in range(k):
 if n % 10 == 0:
  n //= 10
 else:
  n -= 1
print(n)
