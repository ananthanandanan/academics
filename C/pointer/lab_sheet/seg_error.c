

/*Does the following code run successfully to return 0 or does it generate a segmentation fault? If it runs fine, then what is the output? Otherwise explain why it segfaults.  
(A segmentation fault occurs when a program attempts to access a memory location that it is not allowed to access.)    
#include <stdio.h>    
#include <stdlib.h>    
void populate(int *a) 
{  
    int *parray = malloc(2 * sizeof(int));  
    parray[0] = 37;  
    parray[1] = 73;  
    a = parray;  
}
int main() 
{  
    int *a = NULL;  
    populate(a);  
    printf("a[0] = %d and a[1] = %d\n", a[0], a[1]);
    return 0;  
}*/

#include <stdio.h>    
#include <stdlib.h>    
void populate(int *a) 
{  
    
    a[0] = 37;  
    a[1] = 73;  

    return;
     
}
int main() 
{  
    int *a = NULL;  
    a = (int *)malloc(2*sizeof(int));
    populate(a);  
    printf("a[0] = %d and a[1] = %d\n", a[0], a[1]);
    free(a);
    return 0;  
}
/* Yes this code gives segmentation fault. It's because a pointer addresss can't be assigned to another pointer unless it is not a pointer to a pointer.
Here if a is dynamically allocated from the main and then passed to the user defined function then this error can be corrected. The above code has been modified as such */