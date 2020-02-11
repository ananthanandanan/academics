#include <stdio.h>

int main(){
    int i,j,n;
    char c='A';
   // printf(" enter the value of repeat");
    //scanf("%d",&n);
    //first pattern

    for(i=1;i<=4;i++)
    {printf("\n");
    for(j=1;j<=8;j++)
    printf("*");
    }

    //second pattern

    for(i=1;i<=4;i++)
    {printf("\n");
    for(j=1;j<=i;j++)
    printf("%d",j);
    }
    // third pattern


    for(i=1;i<=5;i++)
    {printf("\n");
    for(j=1;j<=i;j++)
    printf("%c",c++);
    }
    printf("\n");
    //fourth pattern

    for(i=0; i< 5; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=5; i>=0; i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}