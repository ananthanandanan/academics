t = int(input())

while t!=0:
    n,m,x,y = list(map(int, input().split()))
    if grid.count(0)==2:
        print("YES")
        continue
    
    if grid[0]==grid[1]==grid[2]==grid[3]:
        print("YES")
        continue
    
    minimum = min(grid)
    count=0
    for i in range(4):
        if i==3:
            grid[i]+=(3*minimum)
        else:
            grid[i]-=m
        
        if grid[i]%2!=0:
            count+=1
    if grid[0]==grid[1]==grid[2]==grid[3]:
        print("YES")
    elif count==1:
        print("YES")
    else:
        print("NO")
        
        
    t-=1