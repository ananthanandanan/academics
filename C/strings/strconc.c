/* This is a code to concate two strings without inbuit-()*/

#include <stdio.h>
#include <string.h>

void concat(char * str1, char *str2, char *str3)

{
	int i=0, j=0;
	while(str1[i]!='\0')
	{
		str3[j++] = str1[i++];
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j++] = str2[i++];
	}
	str3[j]='\0'; 

	return;
}

int  main()
{
	char str1[50], str2[50], str3[50];
	printf("enter the strings\n");
	fgets(str1, 50,stdin);
	fgets(str2, 50,stdin);
	concat(str1, str2, str3);
	printf("the new string is: %s+%s=%s\n",str1,str2,str3);

	return 0;
}

	
