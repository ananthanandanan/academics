n = int(input())


product = []

for i in range(n):
    product_item = input()
    product.append(product_item)

frequency = {}

# iterating over the list
for item in product:
    if item in frequency:
        # incrementing the counr
        frequency[item] += 1
    else:
        # initializing the count
        frequency[item] = 1

## get the values
values = frequency.values()
freq = max(values)

## Get the keys
best_prod = [k for k,v in frequency.items() if v == freq]

print(">>>",sorted(best_prod)[-1])
    
