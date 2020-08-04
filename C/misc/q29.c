#include <stdio.h>
#include <math.h>
#include <string.h>
int binary_convert(unsigned int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

void  hex_convert(char hex[],int l) {
    int val = 0;
    long int decimal= 0;
    for(int i=0; hex[i]!='\0'; i++)
    {
 
        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 +10;
        }
    decimal += val * pow(16, l);
        l--;
        printf("%ld",decimal);
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %ld", decimal);



}

int octal_convert(unsigned int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    return dec;
}

int main(){

    unsigned int value, decimal;
    char hex[20];
    int l;
    int choice;
    
    printf("Enter the choice as given \n[binary:1\n,hexa:2\n octal :3,\n exit :4\n]");
    scanf("%d",&choice);
    do{
        switch (choice)
        {
        case 1:printf("enter the value");
                scanf("%d",&value);
                 decimal = binary_convert(value);
                printf("decimal value is:%d",decimal);
                
            break;
        case 2: 
            printf("enter the value");
              scanf("%s",hex);
                
                l = strlen(hex);
                hex_convert(hex,l);
                
            break;
        case 3:printf("enter the value");
                scanf("%o",&value);
                printf("the decimal value is:%d",octal_convert(value));
            break;
        case 4 : exit(0);

        
        default:printf("invalid");
            break;
        }
        printf("if you want to continue enter a choice ");
        scanf("%d",&choice);
    }while(choice>=1 && choice<=4);
    return 0;

}