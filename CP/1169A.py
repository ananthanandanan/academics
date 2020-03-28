n,a,x,b,y = map(int,input().split())

count =0

if a==b :
    count +=1

while True:
    
    if a==b :
        count +=1 
    if a==x or b==y : 
        break
   
    if a<n :
        a += 1
    else :
        a = 1
      
    if b>1:
        b -= 1
    else :
        b=n
    
if count !=0 :

    print("YES")
else :

    print("NO")



        


