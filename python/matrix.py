
A = [],B = [],M = []
r1 = int(input("enter the rows"))

c1 = int(input("enter the  column"))

r2 = int(input("enter the rows"))

c2 = int(input("enter the  column"))

if c2 == r1: 


    print("enter the first matrix-A")

    for i in range(r1):

        r =[]
        for j in range(c1):
            r.append(int(input()))
        A.append(r)   

    print("enter the matrix-B")

    for i in range(r2):

        r =[]
        for j in range(c2):
            r.append(int(input()))
        B.append(r)   

    for i in range(r1):
        row = []
        for j in range(c2):
            rsum = 0
            for k in range(c1):
                rsum += A[i][k]*B[k][j]
            row.append(rsum)
        M.append(row)

    for i in range(r1):
        for j in range(c2):
            print(M[i][j] , end = " ")
        print()

else :

    print("multiplication operation not possible")






