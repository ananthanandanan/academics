
#include<stdio.h>

int main() {

    int x, *counter;
    counter = &x;

    for(*counter=0;*counter <5 ;(*counter)++)
    {
        printf("the loop counter value is %d\n",*counter);
        printf("the loop counter addr is %p\n",counter);
        printf("the  value(addr) of integer is %p\n",&x);
    }
    return 0;
}