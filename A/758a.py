# 10.03.2020 @odnaks
n = int(input())
str = input()
arr = str.split()
max = 0
for i in range(n):
 if int(arr[i]) > max:
  max = int(arr[i])
sum = 0
for i in range(n):
 sum = sum + (max - int(arr[i]))
print(sum)
