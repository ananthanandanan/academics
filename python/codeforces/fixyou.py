

t = int(input())

while t!= 0:
    
    n,m = map(int,input().split())
    grid = list(list(input().replace('',' ').split()) for i in range(n))
    count = 0
    for i in range(n-1):
        if grid[i][m-1]!="D":
            count+=1
    for i in range(m-1):
        if grid[n-1][i] !="R":
            count+=1
    print(count)
    t=t-1