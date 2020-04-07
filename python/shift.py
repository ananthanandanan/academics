
r = int(input("enter the row"))

c = int(input("enter the column"))

A = []



print("enter the matrix")

for i in range(r):
    row= []
    for j in range(c):
        row.append(int(input()))
    A.append(row)

n1 = int(input("enter row 1"))
n2 = int(input("enter row 2"))    



for i in range(c):

    t = A[n1-1][i]

    A[n1-1][i] =  A[n2-1][i]
    A[n2-1][i] = t

for i in range(r):
    for j in range(c):
        print(A[i][j] , end = " ")
    print()
