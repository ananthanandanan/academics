/*13-4-20
*Ananthan2k
Given  two  sorted  lists  A  and  B, Create a  new sortedarray  with  maximum  possible  length, which alternatively takes elements from both the lists. Let the first element be from list A.
( Do not do sorting after creation of the output array. Pick the elements alternatively such that array is sorted at the end of picking)*/
#include<stdio.h>
int main()
{
    int a[100],b[100],n,m,k=1,s=0,c[100],h=0,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    c[0]=a[0];
    int i=0,j=0;
    while(i<n && j<m)
        {
            if(h==0)
                {
                    if(j==m-1)
                        break;
                    for(int l=j;l<m;l++)
                        {
                            if(c[k-1]<b[l])
                                {
                                    c[k]=b[l];
                                    j=l+1;
                                    k++;
                                    h=1;
                                    break;
                                }
                            else
                            {
                                continue;
                            }
                            
                        }
                }
            else
            {
                if(i==n-1)
                    break;
                for(int s=i;s<n;s++)
                        {
                            if(c[k-1]<a[s])
                                {
                                    c[k]=a[s];
                                    i=s+1;
                                    k++;
                                    h=0;
                                    break;
                                }
                            else
                            {
                                continue;
                            } 
                        }  
            }
            
        }
     if(h==0)
        {
        if(c[k-1]<b[m-1])
            c[k]=b[m-1];
        for(int l=0;l<k+1;l++)
        printf("%d ",c[l]);
        f=1;
        }
        else
        {
        if(c[k-1]<a[n-1])
            c[k]=a[n-1];
        for(int l=0;l<k+1;l++)
        printf("%d ",c[l]);
        f=1;
        }
    if(f==0)
        {
            for(int l=0;l<k;l++)
              printf("%d",c[l]);
        } 
    
    return 0;
}