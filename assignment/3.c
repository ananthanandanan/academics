/*12-4-20
*Ananthan2k
*Find the kth smallest element in the Array*/

#include<stdio.h>
int main()
    {
        int n,k,a[50],i,j,temp;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&k);

        //delete duplicate
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                {
                    if(a[i]==a[j])
                        {
                            for(int r=j;r<n;k++)
                                a[r]=a[r+1];
                            n--;
                            j--;
                        }
                }
        for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                    {
                        if(a[i]>a[j])
                            {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                            }
                    }              
            }
        if(k<=n)
            printf("%d\n",a[k-1]);
        else
            printf("NO OUTPUT");
        return 0;
    }