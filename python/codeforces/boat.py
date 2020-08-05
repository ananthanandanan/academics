t = int(input())

while t!= 0:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    s=[]
    result=[]
    #length
    b=0
    peeps = len(a)-1
    while(b<=peeps):
        s.append(a[b]+a[peeps])
        b+=1
        peeps-=1
    unique=set(s)
    for k in unique:
        count = 0
        for i in range(len(a)-1):
            for j in range(i+1,len(a)):
                if(a[i]+a[j])==k:
                    count+=1
                    a[i]=a[j]=1000
        result.append(count)
    final = result.index(max(result))
    print(result[final])
    t=t-1