
/*@
    requires n>0;
    requires \valid_read(arr+(0..n-1));
    requires \valid_read(sum+(0..n-1));

    ensures sum[n-1]== \sum(0,n-1, \lambda integer i;arr[i]+0);



*/

void Cum(int arr[], int n,int sum[]){

    sum[0] = arr[0]; // first elm


    /*@
    loop invariant 1<=i<=n;
    loop invariant sum[i-1]== \sum(0,i-1,\lambda integer m; arr[m]+0);
    loop assigns i;
    loop variant n-i;
*/
    for(int i=1;i<n;i++){

        sum[i] = sum[i-1]+arr[i]; 
    }

}