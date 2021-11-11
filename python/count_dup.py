def countDuplicate(numbers):
    hmap = {}
    for i in numbers:
        if i in hmap:
            hmap[i]+=1
        else:
            hmap[i] = 1
    res = 0
    for i in hmap:
        if hmap[i] >1:
            res+=1
    return res