/* Code to print the sine of value in range 0-1*/

#include <stdio.h>
#include <math.h>

 int main() {

     double val, ans;

     printf("enter the value b/w 0 and 1 :");
     scanf("%lf",&val);

     if(val>=0 && val<=1) // to check whether val is between 0 and 1.
     {
         ans = sin(val); // generate the sin value
         printf("The answer to %lf is %lf",val,ans);
         
     }

     else 
     { printf("Invalid input");
         
     }
    return 0;
}