#include <stdio.h>

void initiate(int a[][4], int n, int m)
{
    printf("elements?\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d",&a[r][c]);
        }
    }
    return;
}

 void corner_case1(int A[][4],int r, int c, int la1, int lb1)
 { 
      int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la1 <=(A[i][j+1]+A[i+1][j]+A[i+1][j+1]) ) && ((A[i][j+1]+A[i+1][j]+A[i+1][j+1])<=lb1)))
                    A[i][j] = 1;
                else if(((la1 <=(A[i][j-1]+A[i-1][j-1]+A[i-1][j]) ) && ((A[i][j-1]+A[i-1][j-1]+A[i-1][j])<=lb1)))
                    A[i][j] = 1;
                else if(((la1 <=(A[i][j-1]+A[i+1][j-1]+A[i+1][j]) ) && ((A[i][j-1]+A[i+1][j-1]+A[i+1][j])<=lb1)))
                    A[i][j] = 1;
                else if(((la1 <= (A[i-1][j]+A[i][j+1]+A[i-1][j+1])) && ((A[i-1][j]+A[i][j+1]+A[i-1][j+1])<=lb1)))
                     A[i][j] = 1;
                else 
                    A[i][j] = 0;


            }
        }

 }

 void edge_case1(int A[][4],int r, int c, int la1, int lb1)
 {  
     int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la1 <= (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])) &&
                 ((A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])<=lb1)))
                    A[i][j] = 1;
                else if(((la1 <=(A[i][j+1]+A[i-1][j]+A[i+1][j]+A[i-1][j+1]+A[i+1][j+1]) ) &&
                 ((A[i][j+1]+A[i-1][j]+A[i+1][j]+A[i-1][j+1]+A[i+1][j+1])<=lb1)))
                    A[i][j] = 1;
                else if(((la1<= (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])) &&
                 ( (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])<=lb1)))
                    A[i][j] = 1;
                else if(((la1 <=(A[i-1][j]+A[i+1][j]+A[i-1][j-1]+A[i][j-1]+A[i+1][j-1]) ) &&
                 ((A[i-1][j]+A[i+1][j]+A[i-1][j-1]+A[i][j-1]+A[i+1][j-1])<=lb1)))
                     A[i][j] = 1;
                else if(((la1<=(A[i][j-1]+A[i][j+1]+A[i-1][j-1]+A[i+1][j]+A[i-1][j+1]) ) &&
                 ((A[i][j-1]+A[i][j+1]+A[i-1][j-1]+A[i+1][j]+A[i-1][j+1])<=lb1)))
                     A[i][j] = 1;
                else 
                    A[i][j]= 0;


            }
        }

 }

 void center_case1(int A[][4],int r, int c, int la1, int lb1)
 {
     int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la1 <= (A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1]))
                &&((A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1])<=lb1)))
                    A[i][j] = 1;
                else  
                    A[i][j] = 0;
               

            }
        }


 }
 void corner_case0(int A[][4],int r, int c, int la0, int lb0)
 { 
      int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la0 <=(A[i][j+1]+A[i+1][j]+A[i+1][j+1]) ) && ((A[i][j+1]+A[i+1][j]+A[i+1][j+1])<=lb0)))
                    A[i][j] = 1;
                else if(((la0 <=(A[i][j-1]+A[i-1][j-1]+A[i-1][j]) ) && ((A[i][j-1]+A[i-1][j-1]+A[i-1][j])<=lb0)))
                    A[i][j] = 1;
                else if(((la0 <=(A[i][j-1]+A[i+1][j-1]+A[i+1][j]) ) && ((A[i][j-1]+A[i+1][j-1]+A[i+1][j])<=lb0)))
                    A[i][j] = 1;
                else if(((la0 <= (A[i-1][j]+A[i][j+1]+A[i-1][j+1])) && ((A[i-1][j]+A[i][j+1]+A[i-1][j+1])<=lb0)))
                     A[i][j] = 1;
                else 
                    A[i][j] = 0;


            }
        }

 }

 void edge_case0(int A[][4],int r, int c, int la0, int lb0)
 {  
     int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la0 <= (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])) &&
                 ((A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])<=lb0)))
                    A[i][j] = 1;
                else if(((la0 <=(A[i][j+1]+A[i-1][j]+A[i+1][j]+A[i-1][j+1]+A[i+1][j+1]) ) &&
                 ((A[i][j+1]+A[i-1][j]+A[i+1][j]+A[i-1][j+1]+A[i+1][j+1])<=lb0)))
                    A[i][j] = 1;
                else if(((la0<= (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])) &&
                 ( (A[i][j-1]+A[i+1][j]+A[i+1][j-1]+A[i][j+1]+A[i+1][j+1])<=lb0)))
                    A[i][j] = 1;
                else if(((la0 <=(A[i-1][j]+A[i+1][j]+A[i-1][j-1]+A[i][j-1]+A[i+1][j-1]) ) &&
                 ((A[i-1][j]+A[i+1][j]+A[i-1][j-1]+A[i][j-1]+A[i+1][j-1])<=lb0)))
                     A[i][j] = 1;
                else if(((la0<=(A[i][j-1]+A[i][j+1]+A[i-1][j-1]+A[i+1][j]+A[i-1][j+1]) ) &&
                 ((A[i][j-1]+A[i][j+1]+A[i-1][j-1]+A[i+1][j]+A[i-1][j+1])<=lb0)))
                     A[i][j] = 1;
                else 
                    A[i][j]= 0;


            }
        }

 }

 void center_case0(int A[][4],int r, int c, int la0, int lb0)
 {
     int i,j;
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(((la0 <= (A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1]))
                &&((A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1])<=lb0)))
                    A[i][j] = 1;
                else  
                    A[i][j] = 0;
               

            }
        }


 }

void Binary_check(int A[][4],int r, int c, int la1, int lb1, int la0, int lb0 , int k)
{   
    int i,j;
    while(k!=0)
    {
        
            printf("got in\n");
            corner_case1(A,r,c,la1,lb1);
            edge_case1(A,r,c,la1,lb1);
            center_case1(A,r,c,la1,lb1);
        
            printf("done in 1's\n");
            corner_case0(A,r,c,la0,lb0);
            edge_case0(A,r,c,la0,lb0);
            center_case0(A,r,c,la0,lb0);

        
        
        for(i=0;i<r;i++)
	    {
		for(j=0;j<c;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	    }
        k--;
    }
    return;
    
}



int main() {

    int A[4][4],row, column,k,la1,lb1,la0,lb0;
    printf("enter the limit of 1's - takes two limits\n");
    scanf("%d %d",&la1,&lb1);
    printf("enter the limit of 's - takes two limits\n");
    scanf("%d %d",&la0,&lb0);
    printf("Enter the iterations\n");
    scanf("%d",&k);
    initiate(A,row,column);
    printf("done this\n");
    Binary_check(A,row,column,la1,lb1,la0,lb0,k);
    return 0;
}