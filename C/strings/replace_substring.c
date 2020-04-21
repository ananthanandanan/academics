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
    printf("success with%d %d %d",i,j,l);
	if(l==j)
		return (i-j);
	else 
		return -1;
}

void delete_sub(char *str1,char *sub,int index) //delete the substring using left shift
{
    int i,l=0;
    for(l=0;sub[l]!='\0';l++);
    for(i=index;str1[i+l];i++)
    {
        str1[i]=str1[i+l];
    }
    str1[i]='\0';
    printf("%s\n",str1);
    return;
}

void replace_sub(char *str1, char *sub, char *new_sub, int index)
{   int l,j=0,iter=0,k=0;
    for(iter=0;str1[iter]!='\0';iter++)
    {   
        if(iter<index)
        {
            new_sub[j++] = str1[l++];
        }
        else
        {
            new_sub[j++] = sub[k++];
        }
        

    
        
    }
    new_sub[j]='\0';

    printf("success");

    return;
}

int main()
{
	char str1[50], str2[50],sub[50],new_sub[50];
	int j=0,pos,len;
	printf("enter the text\n");
	scanf("%s",str1);
	printf("enter the substring\n"); // use fgets
	scanf("%s",str2);
    printf("enter the substring to overwrite\n");
	scanf("%s",sub);

	pos = search(str1,str2);
	if(pos != -1)
	{
        delete_sub(str1,str2,pos);
        replace_sub(str1,sub,new_sub,pos);
		printf("the new string is at %d is %s\n",pos,new_sub);
	}
	else 
		printf("No substring\n");

	return 0;

}