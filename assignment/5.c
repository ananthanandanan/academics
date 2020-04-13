/*Given an unsorted array and two numbers x and k, find k closest values to x*/
#include<stdio.h>


int bubble_sort(int *arr,int n )
{
    int temp;
    for(int i=0;i<n;i++)
        for(int j=i+1;i<n;i++)
            {
                if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }

            }

}
int main()
{
    int a[100],n,k,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&x,&k);
    // sorting the array
    bubble_sort(a,n);
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                 {
                     for(int k=j;k<n;k++)
                        a[j]=a[j+1];
                    j--;
                    n--;
                 }
            }
    for(int i=0;i<n;i++)
        {
            if(x==a[i])
             {
                 for(int j=i-1;j>=0,k>0;j--,k--)
                    printf("%d ",a[j]);
             }
        }
    return 0;
}