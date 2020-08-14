
t = int(input())
while t!=0:
    
    n = int(input())
    grid=list(input().replace('0',' ').split()) 
    i=1;s=0
    while len(grid)!=0:
        if i%2!=0:
            x=grid.index(max(grid))
            y=grid.pop(x)
            z=len(y)
            s+=len(y)
        else:
            grid.pop(grid.index(max(grid)))
        i+=1
    print(s)
    t-=1