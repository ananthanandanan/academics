r,g,b = map(int,input().split())

r = r//2 + r%2
g = g//2 + g%2
b = b//2 + b%2

ans = 30 + 3*(r-1)

ans = max(ans,31 + 3*(g-1))
ans = max(ans,32 + 3*(b-1))

print(ans)