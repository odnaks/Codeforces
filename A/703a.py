n = int(input())
mishka = 0
chris = 0

for i in range(n):
 str = input()
 m, c = str.split()
 if int(m) > int(c):
  mishka += 1
 elif int(m) < int(c):
  chris += 1
if mishka > chris:
 print("Mishka")
elif mishka < chris:
 print("Chris")
else:
 print("Friendship is magic!^^")

