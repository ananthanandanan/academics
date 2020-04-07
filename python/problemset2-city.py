n,m = map(int,input().split())

l = list(map(int,input().split()))[:m]

c = []

count = []

for i in range(n):

    if i in l:

        c.insert(i,1)
    else:
        c.insert(i,0)

for i in range(n):
    if c[i] == 1 :
        count.append(0)
    else :
        count.append(min(abs(i-l[0]),abs(i-l[1])))

maxm = max(count)

print(maxm)
