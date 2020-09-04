def function(a,x,b,y,n):
    if a-x>=n:
        a-=n
    else:
        n-=a-x
        a=x

        if b-y>n:
            b-=n
        else:
            b=y
        
    return a*b
    
for _ in range(int(input())):
    a,b,x,y,n=map(int,input().split())
    s=function(a,x,b,y,n)
    d=function(b,y,a,x,n)
    print(min(s,d))