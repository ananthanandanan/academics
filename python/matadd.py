A = []
B = []
M = []
r1 = int(input("enter the rows"))

c1 = int(input("enter the  column"))



print("enter the first matrix-A")

for i in range(r1):

    r =[]
    for j in range(c1):
        r.append(int(input()))
    A.append(r)   

print("enter the matrix-B")

for i in range(r1):

    r =[]
    for j in range(c1):
        r.append(int(input()))
    B.append(r)   

M = [[A[i][j]+B[i][j] for j in range(c1)]for i in range(r1)]

for row in M :
    print(row)
    
