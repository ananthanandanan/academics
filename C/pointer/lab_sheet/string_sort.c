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




void stringsort(char **ptr,int n)
{
    char a[100];
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(strcmp(ptr[j],ptr[j+1])>0)
            {
                strcpy(a,ptr[j]);
                strcpy(ptr[j],ptr[j+1]);
                strcpy(ptr[j+1],a);
            }
        }
    }
}
int main(){
    char **str,s[100];
    int n,len;
    printf("Number of Strings :\n");
    scanf("%d",&n);
    printf("Maximum String Length :\n ");
    scanf("%d",&len);
    str = MatAlloc(char,n);
    for(int i=0;i<n;i++)
    {
        printf("Given String %d : ",i);
        scanf("%s",s);
        str[i] = Malloc(char,(strlen(s)+1));
        strcpy(str[i],s);
    }
    stringsort(str,n);

    printf("Input when sorted : ");
    for(int i=0;i<n;i++){
        printf("%s ",str[i]);
    }
    return 0;

    free(str);
    
}