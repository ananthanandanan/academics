s = input()

c = 0
b = ""

for i in s :
    if i not in(b):

        c+=1
        b += i
if c %2 == 0:

    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")