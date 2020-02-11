s = input()

req = [ 'h','e','l','l','o']

c = -1

for check in req :

    c = s.find(check,c+1)
    if c == -1 :
        print("NO")
        exit()

print("YES")

