/*this is a program to prin the max sum 
* of 6x6 matrix with hour glass pattern
*/

#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

void hour_glass(int arr[6][6]){
    int sum = 0;
    int res = sum;

    for(int r=0; r<=3;r++){
        for ( int c = 0; c <=3; c++)
        {
            sum = arr[r][c] + arr[r][c+1] + arr[r][c+2] + arr[r+1][c+1] + arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];

            res = MAX(res,sum);


        }
        
    }
    printf("\n%d",res);


}

int main() {
    int arr[6][6],i,j;

    for ( i = 0; i < 6; ++i)
  {
    for ( j = 0; j < 6; ++j)
    {
      
      scanf("%d", &arr[i][j]);
    }
  }
  for ( i = 0; i < 6; ++i)
  {
      printf("\n");
    for ( j = 0; j < 6; ++j)
    {
      
      printf("%d ",arr[i][j]);
    }
  }

  hour_glass(arr);
return 0;
}