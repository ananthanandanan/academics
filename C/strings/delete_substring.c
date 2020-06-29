#include <stdio.h>

int  search(char *str1, char *str2)
{
	int j, i,l;
	for( l=0;str2[l]!='\0';l++); //check length of substring
     j=0,i=0;
	while(str1[i]!='\0' && str2[j]!='\0')
	{
		if(str1[i]==str2[j])
        {
            j++;
        }
			

		else
        {
            j=0;
        }
         
		i++;
	}

	if(l==j)
		return (i-j);
	else 
		return -1;
}

void delete_sub(char *str1,char *sub,int index) //delete the substring using left shift
{
    int i,l=0;
    for(l=0;sub[l]!='\0';l++);
    for(i=index;i<(index+l);i++)
    {
        str1[i]=str1[i+l];
    }
    str1[i]='\0';
    return;
}
int main()
{
	char str1[50], str2[50];
	int j=0,pos;
	printf("enter the text\n");
	scanf("%s",str1);
	printf("enter the substring to delete\n");
	scanf("%s",str2);

	pos = search(str1,str2);
	if(pos != -1)
	{   delete_sub(str1,str2,pos);
		
		printf("the substring pos = %d is: %s\n",pos,str1);
	}
	else 
		printf("the substring pos = %d is: %s\n",pos,str1);

    return 0;

}