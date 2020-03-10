# 10.03.2020 @odnaks
n = int(input())
str = input()
arr = str.split()

for i in range(n):
 if arr[i] == '1':
  print("HARD")
  exit()
print("EASY")

