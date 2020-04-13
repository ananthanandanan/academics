/*13-4-20
*Ananthan2k
*Read a value k from the user and using k leftrotation and rightrotation depending 
*on the user choice Left or Right, print the rotated value*/


#include<stdio.h>
void leftRotation(int a[],int n)
{
    int i,temp;
    temp=a[0];
    for(i=1;i<n;i++)
        a[i-1]=a[i];
    a[n-1]=temp;
}
void rightRotation(int a[],int n)
{
    int i,temp;
    temp=a[n-1];
    for(i=n-1;i>=0;i--)
        a[i+1]=a[i];
    a[0]=temp;
}
int main()
{
    int a[100],n,k,i;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("No of rotations:\n");    
    scanf("%d",&k);
    printf("Enter l-left or r-right ");
    scanf(" %c",&c);
    if(c=='l')
        {
            while(k>0)
                {
                    leftrotation(a,n);
                    k--;
                }
        }
    else
    {
        while(k>0)
            {
                rightrotation(a,n);
                k--;
            }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}