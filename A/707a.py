str = input()
arr = str.split()
n = int(arr[0])
m = int(arr[1])

for i in range(n):
 str = input()
 arr = str.split()
 for j in range(m):
  if arr[j] == 'C' or arr[j] == 'M' or arr[j] == 'Y':
   print("#Color")
   exit()
print("#Black&White")
