def max_sum(arr):
    incl = 0
    excl =0

    for i in arr:

        new_excl = excl if excl>incl else incl

        incl = excl + i

        excl = new_excl

    if excl > incl :

        print(excl)
    else :

        print(incl)    

arr = [5,5,10,100,10,5]
max_sum(arr)