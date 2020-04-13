// siz of array

#include <stdio.h>

int main() {
    int array[100];
    char name[20];
    float farray[20];
    double darray[20];
    printf("size of int: %lu bytes\n",sizeof(array));
    printf("size of char: %lu bytes\n",sizeof(name));
    printf("size of farray: %lu bytes\n",sizeof(farray));
    printf("size of darray: %lu bytes\n",sizeof(darray));        
    return 0;
}