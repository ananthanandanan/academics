

d = int(input())

arr = list(map(int, input().split()))
gc = 0
for i in range(len(arr)):
    if arr[i]+d in arr and arr[i]+2*d in arr:
        gc+=1

print(gc)