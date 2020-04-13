/* 12-4-20
*Ananthan2k
*Write a program to interchange the largest and the smallest number in the array.*/
#include<stdio.h>



int main()
  {
    int arr[50],i,j,SIZE,temp,max,min,k; 
    scanf("%d",&SIZE);
    for(i=0;i<SIZE;i++)
      scanf("%d",&arr[i]);
    max=arr[0];                  //max val initial
    for(i=1;i<SIZE;i++)
      {
        if(max<arr[i])
          {
            max=arr[i];
            k=i;
          }
      }
    min=arr[0];                //min val initial
    for(i=0;i<SIZE;i++)
      if(arr[i]<min)
        {
          min=arr[i];
          j=i;
        }
    for(i=0;i<SIZE;i++)
      {
        if(arr[i]==max)
          arr[i]=min;
        else if(arr[i]==min)
          arr[i]=max;
      }
    for(i=0;i<SIZE;i++)
      printf("%d ",arr[i]);
    return 0;
  }
  
