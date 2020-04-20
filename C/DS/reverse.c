 
#include <stdio.h> 
#include <string.h> 
#define SIZE 50

void swap(char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  

void reverse(char str[]) 
{ 

    int n = strlen(str), i; 
  
    for (i = 0; i < n/2; i++) // swapping each element starting from both ends 
        swap(&str[i], &str[n-i-1]); 
} 
  

int main() 
{ 
    char str[SIZE];
    scanf("%s",str);
  
    reverse(str); 
    printf("Reversed string is %s", str); 
  
    return 0; 
} 
