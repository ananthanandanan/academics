/*
@ requires n>0;
    requires \valid_read(a+(0..n-1));

    behavior one:
    assumes \forall integer r;
    0<=i<=n-1 ==> a[r]!=a[r+1];
    ensures \result == 1;

    behavior two:
    assumes \exists integer r;
    0<=i<=n-1 && a[r]==a[r+1];
    ensures \result == 0;

    complete behaviors;
    disjoint behaviors;
*/


int  Adj(int a[], int n){
    int count=0;
    /*@ 
    loop invariant \forall integer j;
    0<=j<i ==> a[j]!=a[j-1];
    loop invariant 0<=i<=n-1;
    loop assigns i, count;
    loop variant n-1-i;
*/

    for(int i=0;i<n-1;i++){
        if(a[i] != a[i+1]){
            count++;
        }
    }
    if(count==n)
    return 1;
    else 
    {
        return 0;
    }
}