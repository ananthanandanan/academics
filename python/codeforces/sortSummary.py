arr = list(map(int, input().split()))

arr1 = []
print(arr)
num = set(arr)
num = list(num)

for i in num:
    lists = []
    lists.append(i)
    occ = arr.count(i)
    if occ in arr:
        lists.append(occ)
        arr1.append(lists)
        print(lists)
arr1.sort(key = lambda x: x[1], reverse=True)

print(arr1)