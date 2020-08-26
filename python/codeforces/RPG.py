
for i in range(int(input())):
    
    p, f = map(int,input().split())
    cnts, cntw  = map(int,input().split())
    s,w  = map(int,input().split())    
    res = 0
    while(p!=0 and f!=0):
        if p%(s+w) == 0:
            res += p//(s+w)
            cnts-=  p//(s+w); cntw-= p//(s+w)
            p=0
        else:
            res += p%(s+w) + p//(s+w)
            cnts-=  p//(s+w); cntw-= p//(s+w)
            if p%(s+w) == s:
                cnts-=1
            else:
                cntw-=1
                
        if cnts==0 and cntw==0:
            break
        
        if f%(s+w) == 0:
            res += f//(s+w)
            cnts-=  f//(s+w); cntw-= f//(s+w)
        else:
            res += f%(s+w) + f//(s+w)
            cnts-=  f//(s+w); cntw-= f//(s+w)
            if f%(s+w) == s:
                cnts-=1
            else:
                cntw-=1
        if cnts==0 and cntw==0:
            break
        
    print(res)    