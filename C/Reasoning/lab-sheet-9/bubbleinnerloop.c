/*@
	requires n>0;
	requires 0<=k<n;
	requires\valid(a+ (0..n-1));
	ensures\forall integer i;
	0<= i<=k ==>a[k]>=a[i];
*/
void bubbleinnerloop(int a[], int n, int k)
{
	/*@
	loop invariant\forall integer i;
	0<= i<j ==> a[j]>=a[i];loop invariant 0<=j<=k;
	loop assigns j,a[0..j+1];
	loop variant k-j;
*/
	for (int j = 0; j < k; j++)
	{
		if (a[j] > a[j + 1])
		{
			int temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
}
