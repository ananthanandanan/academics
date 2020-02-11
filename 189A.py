import random
n,a,b,c = map(int,input().split())
count = 0

while n !=0 :
    if n>a :
        n-=a
        count += 1
    elif n>b:
        n-=b
        count += 1
    elif n>=c:
        n-=c
        count += 1
    else :
        break
    
    
print(count)

