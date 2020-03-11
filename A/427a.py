n = int(input())
str = input()
arr = str.split()

freeCops = 0
uninvestigatedCrimes = 0
for i in range(n):
 if arr[i] == "-1":
  if freeCops > 0:
   freeCops -= 1
  else:
   uninvestigatedCrimes += 1
 else:
  freeCops += int(arr[i])
print(uninvestigatedCrimes) 
