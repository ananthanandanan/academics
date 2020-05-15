
#define Add(x,y) x+y
#define Mult(x,y) x*y
double Scalar_product(int len, double *arr1, double *arr2)
{   
    double sum=0;
    for(int i=0;i<len;i++)
    {   
        sum = Add(sum,Mult(arr1[i],arr2[i]));
    }
    return sum;
}