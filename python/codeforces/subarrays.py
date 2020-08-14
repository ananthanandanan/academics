
t = int(input())

while t != 0:

    n = int(input())
    List = list(map(int, input().replace('',' ').split()))
    sublist = [[]]
    count = 0
    
    for i in range(len(List) + 1):

        
        for j in range(i + 1, len(List) + 1):

            # slice the subarray
            sub = List[i:j]
            if sum(sub)==len(sub):
                count+=1
    
    print(count)

    t -= 1
