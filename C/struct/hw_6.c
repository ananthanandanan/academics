#include <stdio.h>
struct student
{ 
    int roll;
    char name[50];
    float marks;
};
int main()
{
    int i=0;
    struct student s[3];
    for(i=0;i<3;i++)
    {
        
        printf("Enter roll no:");
        scanf("%d",&s[i].roll);
        printf("Enter first name:");  
        scanf("%s",s[i].name);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }
for (i=0;i<3;i++)
{
   printf("Roll no is:%d \t",s[i].roll);
   printf("First name is: %s\t",s[i].name);
   printf("Mark is:%f \n",s[i].marks);
    
}
return 0;
}
