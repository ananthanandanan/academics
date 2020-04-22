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



void replace_sub(char *str1, char *replace, char *new_sub, int index)
{   
    int lword,j=0,iter=0, lreplace;
    for(lreplace=0;replace[lreplace]!='\0';lreplace++); // length of word to be replaced.

    while(iter<index)
    {
        new_sub[j++] = str1[iter];   //put words before "replace" word
        iter++;
    }
    lword=0;
    while(replace[lword]!='\0')
    {
        new_sub[j++] = replace[lword]; // add replace word
        lword++;
    }
    iter = iter + lreplace;
    while(str1[iter]!='\0')
    {
        new_sub[j++] = str1[iter];  // add rest of words
        iter++;
    }
        
    
    new_sub[j]='\0';

    

    return;
}

int main()
{
	char str1[50], str2[50],sub[50],new_sub[50];
	int j=0,pos,len;
	printf("enter the text\n");
	fgets(str1,50,stdin);
	printf("enter the substring\n"); // use fgets
	fgets(str2,50,stdin);
    printf("enter the substring to overwrite\n");
	fgets(sub,50,stdin);

	pos = search(str1,str2);
	if(pos != -1)
	{
        replace_sub(str1,sub,new_sub,pos);
		printf("the new string is at %d is %s\n",pos,new_sub);
	}
	else 
		printf("No substring\n");

	return 0;

}