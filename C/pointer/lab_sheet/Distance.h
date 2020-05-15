#include <stdio.h>
#include <math.h>

double Distance(double **arr, int rows, int columns)
{
    double dist,sum=0;
    int ch1,ch2;
    printf("enter the two choices of vector[1,2,3...n] signifies the n vectors\n");
    scanf("%d %d",&ch1,&ch2);
    for(int i=0;i<columns;i++)
    {
        sum =  pow((*(*(arr+(ch1-1))+i) - *(*(arr+(ch2-1))+i)),2);
           
    }
    dist = sqrt(sum);
    return dist;

}