s,n = map(int,input().split())



d = []
c=0

for i in range(n):
     l = list(map(int,input().split()))
     d.append(l)
d.sort()


    

for i in d :

    if i[0]< s :
        s += i[1]
        c+=1
    
if c == n :
    print("YES")

else : 
    print("NO")