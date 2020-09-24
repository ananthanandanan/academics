

for test in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    count=0
    non_dup = set(arr)
    rev = sorted(arr, reverse=True)
    if len(non_dup)<len(arr) or (rev!=arr):
        print("YES")
        continue
    else:
        print("NO")
        continue
    for i in range(len(arr)):
        swapped = True
        for j in range(0, len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                (arr[j], arr[j + 1]) = (arr[j + 1], arr[j])
                swapped = False
                count+=1
        if swapped:
            break
    if ((n*(n-1)//2)-1)<=count: ## if count is great then "NO"
        print("NO")
    else:
        print("YES")














