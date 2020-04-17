#include<stdio.h>
#include<string.h>


int main()
{ char str[20];
  int i,len=0,cnt=0,j=0,sum=0,k=0,contg[30];

  printf("enter binary string\n");
  scanf("%s",str);

  len=strlen(str);
  for(i=0;i<len;)
    {  for(j=i;j<len;j++)
      {
        if (str[j]=='1')
        {
          sum=sum+1;
        }
        else {break;}
        
      }

        if (sum!=0)
        {
            contg[k++]=sum;
            sum=0;
        }
        
        i=j+1;
    }

   for(i=0;i<k;i++)
    printf("%d ",contg[i]);
    printf("\n");

   return 0;

      }