#include <stdio.h>

int main() {
    const int SIZE = 100;
    //array is fixed once declared statically. So you can declare it as const.
    int x[SIZE],n,s=0;
    printf("This is the program for adding n numbers. Enter the limit n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    // Read the array

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);

    }

   
    //Access the  array to find the sum of array
    for(int i=0;i<n;i++)
    {
        s=s+x[i];

    }

    printf("Sum of elements %d\n",s);
    // Access the array and update the content by incrememting by 1

    for(int i=0;i<n;i++)
    {
        x[i] = x[i]+1;

    }

    //print the array
    printf("Updated array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",x[i]);

    }


    return 0;
}