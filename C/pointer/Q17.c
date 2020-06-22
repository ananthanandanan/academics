#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*macro*/
#define SIZE 50 
#define Add(x,y) x+y
#define Mult(x,y) x*y
#define Div(x,y) x/y
#define Mod(x,y) x%y
#define MAX(a, b) ((a) < (b) ? (b) : (a))
#define MIN(a, b) ((a) > (b) ? (b) : (a)) 
#define Swap(a,b) a^=b^=a^=b;
#define Alloc(type,n) (type *)calloc(n,sizeof(type))
#define MatAlloc(type,n) (type**)calloc(n,sizeof(type *))
#define Malloc(type,n) (type *)malloc(n*sizeof(type))


char  **MEM_Alloc(int n,int size)
{   
    char **ptr;
    ptr = MatAlloc(char,n);

    for (int i = 0; i < n; i++)
    {
        ptr[i] = Alloc(char,size); 
    }

    return (ptr);

}

void Read(char **arr, int limit)
{   
    printf("enter the elements of array\n ");

    
        for(int j=0;j<limit;j++)
        {
            scanf("%s",arr[j]);
        }

    return;
}

void sort(char **str,int limit)
{   
    int i,j;
    char temp[SIZE];
    for (i = 0; i < limit - 1 ; i++)
        {
            for (j = i + 1; j < limit; j++)
            {
                if (strcmp(str[i], str[j]) > 0) 
                {
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
        }
        return;

}

void Print(char **arr1, int limit)
{   printf("the string:\n");

        for(int j=0;j<limit;j++)
        {
        printf("%s \n",arr1[j]);
        }
    
    
    return;
}

int main() {

    char **str1;
    int limit;
    printf("enter the no of string\n");
    scanf("%d",&limit);
    //allocated the memory
    str1 = MEM_Alloc(limit,SIZE);
    Read(str1,limit);

    Print(str1,limit);
    sort(str1,limit);
    Print(str1,limit);

    free(str1);




    return 0;
}
