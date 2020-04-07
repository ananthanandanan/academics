l = list(map(int,input().split()))

rep = []
no= []
feq = []

for i in l :
    if i not in(rep):
        rep.append(i)
        count = 0
        for j in l :

            if i == j :
                count+=1
    
        no.append(i)
        feq.append(count)
temp = no 

for i in range(len(temp)):

    ind = feq.index(max(feq))
    print(no[ind],end=" ")
    feq.remove(max(feq))
    no.remove(no[ind])
    
    



