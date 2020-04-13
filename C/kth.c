
#include <stdio.h>

void duplicateRemoval(int arr[],int size)
{ int i,k,j;
   for(i=0; i<size; i++)
   {
         for(j=i+1; j<size; j++)
         {
              if(arr[i] == arr[j])
                {
                          for(k=j; k<size; k++)
                             {
                                       arr[k] = arr[k + 1];
                             }
                (size)--;
               printf( "%d %d,    ", j,arr[j]);
                j--;

               }
        }
    }
}

int main() {

    int arr[5] = {3,2,2,3, 2};
    duplicateRemoval(arr,5);

    return 0;
}