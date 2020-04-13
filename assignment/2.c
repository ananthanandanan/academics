/*12-4-20
*Ananthan2k
Print the sum of even positioned numbers in the list*/
#include<stdio.h>


int main()
    {
        int arr[50],i,s=0,size;
        scanf("%d",&size);
        for(i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
                if((i+1)%2==0) // check whether the position of element is even or not
                    s+=arr[i];
            }
        printf("%d",s);
        return 0;
    }