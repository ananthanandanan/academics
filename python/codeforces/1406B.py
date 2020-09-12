

for test in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    minVal = a[0];maxVal = a[0];mP = a[0]; count = 0 if a[0]>0 else 1
    for i in range(1, n,1):
        if a[i] < 0:
            count+=1
            t = maxVal
            maxVal = minVal
            minVal = t
            
        maxVal = max(a[i], maxVal * a[i])
        minVal = min(a[i], minVal * a[i])

        mP = max(mP, maxVal)
    if  count==n:
        print(-mP)
    elif a.count(0)>=1:
        print(0)

    else:
        print(mP)
        
        
