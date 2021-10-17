from collections import Counter

def itemSort(items):
    new_list = []
    d_list = []
    el = Counter(items)
    new_list = [[item]*el[item] for item in el if el[item]>1]
    nl = new_list[0] + new_list[1]
    for item in el:
        if el[item]==1:
            d_list.append(item)
    f_list = sorted(d_list) + sorted(nl)
    return f_list

            
    
    

d = int(input())
arr = list(map(int, input().split()))
print(itemSort(arr))