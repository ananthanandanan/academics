/*
    Kasthuri A S Nair
    AM.EN.U4CSE19328

Write a basic program with pointers as directed below.
a.Declare a pointer to an integer variable ptr. 
    int * ptr;
b.Use malloc to dynamically allocate memory for ptr. 
    ptr = (int *) malloc( sizeof(int) );
c.Assign an integer value to the memory pointed to by ptr. 
    *ptr = 10;
d.Print the value pointed to by ptr to the terminal.
    printf(“%d\n”, *ptr);
e.Free the ptr memory. 
    free(ptr);*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc( sizeof(int) );
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    return 0;

}