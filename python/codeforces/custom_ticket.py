n = int(input())
braces = []

braces = [input() for i in range(n)]

results = []

for i in range(len(braces)):
	while len(braces[i]) > 0:
		t = braces[i]
		braces[i] = braces[i].replace('()','')
		braces[i] = braces[i].replace('{}','')
		braces[i] = braces[i].replace('[]','')
		if t == braces[i]:
			results.append("NO")

	results.append("YES")



print(results)