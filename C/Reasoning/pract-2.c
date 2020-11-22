//check if every element is equal to index


/*@
    requires n>0;
    requires \valid_read(arr+(0..n-1));
    behavior one:
        assumes \forall integer j;
        0<=j<n ==> arr[j]==j;
        ensures \result == 1;
        
    behavior two:

    assumes \exists integer j;
    0<=j<n && arr[j]!=j;
    ensures \result == 0;

    complete behaviors;
    disjoint behaviors;

*/

int checkIndex(int arr[], int n){

    /*@
        loop invariant 0<=i<=n;
        loop invariant \forall integer k;
        0<=k<i ==> arr[k]==k;
        loop assigns i;
        loop variant n-i;
    
    */

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=i){
            return 0;
        }
    }

    return 1;
}