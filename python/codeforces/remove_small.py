
t = int(input())

while t!= 0:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    count = 0
    
    while (len(a)!=1):
        if(abs(a[-1]-a[-2])>1):
            count = 1
            break
        a.pop()
    
    if count != 0:
        print("NO")
    else:
        print("YES")
    t=t-1