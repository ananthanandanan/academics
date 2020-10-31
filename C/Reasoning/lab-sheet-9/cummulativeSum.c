/*@
	requires n>0;
	requires\valid_read(arr + (0..n-1));
*/

void cummilativeSum(int arr[], int n)
{
	int sum = 0, prev = 0, j, x;

	/*@
		loop invariant \exists integer i; 0 <= i < n ==> arr[j] == prev + arr[i];
		loop invariant 0 <= j <= n;
		loop assigns j, arr[0..j+1], prev;
		loop variant n-j;
	*/

	for (j = 0; j < n; j++)
	{
		arr[j] = prev + arr[j];
		prev = arr[j];
	}
}
