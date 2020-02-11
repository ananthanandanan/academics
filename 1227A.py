q = int(input())

while q!=0:
    count = 0
    n = int(input())

    for i in range(1,10):
        beau = 0
        for j in range(1,10):
            beau = beau*10+i
            if beau <= n:
                count+=1
    print(count)
    q-=1        



    