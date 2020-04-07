
n = int(input("enter the value"))

for i in range(1,n+1):
    for s in range(n-i-1,-1,-1):
        print(" ",end=" ")
    for j in range(1,i+1):
        print(j,end = " ")
    for k in range(i-1,0,-1):
        print(k,end=" ")
    print()    
    