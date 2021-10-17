d = int(input())

arr = list(map(int, input().split()))


# for i in range(d):
#     temp = arr[0]
#     for j in range(len(arr)-1):
#         arr[j] = arr[j+1]
#     arr[n-1] = temp
temp = []
temp = arr[0:d]
del arr[0:d]
arr = arr+temp    

print(arr)