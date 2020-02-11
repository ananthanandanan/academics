

q = int(input().strip())



while q!=0 :

    count = 0
    n = int(input())

    while n != 1 :
        if n%2 ==0 :
            n = n// 2
        elif n%3 == 0 :

            n = 2*(n//3)
        elif n%5 ==0 :
            n = 4*(n//5)
            
        else :

            count = -1
            break

        count +=1

         

    q-=1
    print(count)

