
tc = int(input())

while tc!=0:

    n = int(input())
    a = list(map(int,input().strip().split()))[:n] 
    a = list(set(a))
    print(len(a))
    tc -= 1
   

    