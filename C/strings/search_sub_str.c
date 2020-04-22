/*search for word in a string*/

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
int main()
{
	char str1[50], str2[50],sub[50];
	int j=0,pos,len;
	printf("enter the text\n");
	scanf("%s",str1);
	printf("enter the substring\n");
	scanf("%s",str2);

	pos = search(str1,str2);
	if(pos != -1)
	{

		printf("the substring pos = %d \n",pos);
	}
	else 
		printf("No substring\n");

	return 0;

}

	
			




