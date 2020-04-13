#include <stdio.h>
void del(int[],int,int);
int main()
{
   int a[100], pos, c, n;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
   printf("Enter the position where you wish to delete element\n");
   scanf("%d", &pos);
   del(a,n,pos);
   return 0;
}
void del(int a[],int n,int pos)   
{ int c;
   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = pos- 1; c < n - 1; c++)
         a[c] = a[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d ", a[c]);
      printf("\n");
   }
}

/*
Enter number of elements in array
4
Enter 4 elements
21
2
4
1
Enter the position where you wish to delete element
4
Resultant array:
21 2 4 
*/