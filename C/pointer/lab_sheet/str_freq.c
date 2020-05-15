#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define Fabs(x) fabs(x)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))

int *freq(char *ptr , int size){
    char s = 'a';
    int *q,sum,k=0;
    q = Alloc(int,26);

    for(int i=0;i<size;i++)
    {
        if(isalpha(ptr[i]))
            ptr[i] = tolower(ptr[i]);
    }
    
    while(k<26)
    {
        sum = 0;
        for(int i=0;i<size;i++)
        {
            if(ptr[i] == s)
            {
                sum++;
            }
        }
        q[k] = sum;
        k++;
        s++;
    }
    return q;
}
int main(){
    char *str,l='a';
    int *arr;
    size_t c=50;  //string restriction

    str = Malloc(char,SIZE);

    printf("Enter the string : ");
    getline(&str,&c,stdin);

    str = realloc(str,(strlen(str)+1));
    
    arr = freq(str,strlen(str));

    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]>1)
            printf("%d %c's\n",arr[i],l);
            else
            {
                printf("%d %c\n",arr[i],l);
            }
        }
        l++;
    }

    free(str);
    free(arr);
    return 0;
}