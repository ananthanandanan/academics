l = list(map(int,input().split()))
maxim = []

for i in range(len(l)-1):
    sum = 0
    for j in range(len(l)):
        sum +=l[j]*j
        

    maxim.append(sum)
    l = l[-1:] + l[:-1]

result = max(maxim)

print(result)
        