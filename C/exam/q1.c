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


void bincheck(char * str, int l)
{
    int i,j;
    char ch;
    for(i=1;i<l;i++)
    for(j=0;j<l-i;j++)
	if(str[j]<str[j+1])
	{
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}

}
int notbin(char *ch,int len)
{
    int i,j;
    for (int i = 0; i < len - 1; i++) { 
        for (int j = i + 1; j < len; j++) { 
            if (ch[i] == ch[j]) { 
                return -1; 
            } 
        } 
    } 
  

    return 1; 
}

int main()
 {
    char str[50],ch;
  int i,j,l,res;
  
       
fgets(str, sizeof str, stdin);
l=strlen(str);
res = notbin(str,l);
  if(res==-1)
  {
      printf("Not binary\n");

  }
  else
  {
      bincheck(str,l);
  }
  
  
   printf("%s\n",str);
    return 0;
}

void rotate(int *arr,int len)
{
    int i, first;


    first = arr[0];

    for(i=0; i<len-1; i++)
    {
    
        arr[i] = arr[i + 1];
    }

    arr[len-1] = first;
}
