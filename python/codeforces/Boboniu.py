
for i in range(int(input())):
    a=list(map(int,input().split()))
    if len(set(a))==1:
        print('Yes')
    else:
        j=0
        for i in a:
            if i%2!=0:
                j+=1
        if j==2:
            print('No')
        elif a==[0,1,1,1] or a==[1,0,1,1] or a==[1,1,0,1] :
            print('No')
        else:
            print("Yes")