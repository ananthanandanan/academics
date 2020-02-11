
start = int(input()) 
end = int(input()) 

for i in range(start,end):
    sum = 0

    for j in range(1,i):
        if i%j==0:
            sum+=j
    if sum == i :
        print(i,"is perfect!!")
    else :
        print(i,"is Not Perfect :(")        

