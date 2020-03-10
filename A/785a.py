# 10.03.20 @odnaks
n = int(input())
sum = 0
for i in range(n):
 name = input()
 if name == "Tetrahedron":
  sum += 4
 elif name == "Cube":
  sum += 6
 elif name == "Octahedron":
  sum += 8
 elif name == "Dodecahedron":
  sum += 12
 elif name == "Icosahedron":
  sum += 20
 else:
  print("err")
  exit()
print(sum)
  
