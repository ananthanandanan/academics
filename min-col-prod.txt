
r = int(input("enter the row"))

c = int(input("enter the column"))

A = []
prod = 1

print("enter the matrix")

for i in range(r):
    row= []
    for j in range(c):
        row.append(int(input()))
    A.append(row)

for i in range(c):
    m =[]
  

    for col in A :
        m.append(col[i])
    mini = min(m)
    prod *=mini 

print("product :",prod)