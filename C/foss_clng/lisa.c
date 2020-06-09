#include<stdio.h>
#include <math.h>


int main() {

    long int n;
    scanf("%ld",&n);
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) 
    { 
        if (n % i == 0)
        { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 

            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    }
    printf("%d",cnt);
    return 0;
}