/*@
   requires n > 0;
   requires \valid_read(arr + (0..n−1));
   behavior not_found:
      assumes \forall integer i;
         1 <= i < n ==> arr[i-1] <= arr[i];
      ensures \result == 1;
   behavior found:
      assumes \exists integer i;
         1 <= i < n && arr[i-1] > arr[i];
      ensures \result == 0;
   complete behaviors;
   disjoint behaviors;
*/

int eq(int arr[], int n) 
{
/*@
    loop invariant \forall integer j;
          1 <= j < i ==> arr[j-1] <= arr[j];
    loop invariant 1 <= i <= n;
    loop assigns i;
    loop variant n − i;
*/
    for (int i=1; i<n; i++)
    {
       if (arr[i-1]> arr[i])
         return 0;
     }
    return 1;
}
