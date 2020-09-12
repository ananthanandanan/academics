
def calculateMex(arr):
    Mex = 0
    
    while( Mex in arr):
        Mex+=1

    return (Mex)


for test in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    list1 = []
    list2 = []
    for j in range(n):
        if j % 2 == 0:
            list1.append(a[j])
        else:
            list2.append(a[j])
    
    mexA = calculateMex(list1)
    mexB = calculateMex(list2)
    
    print((mexA+mexB))
    