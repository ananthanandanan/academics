/*@
    logic integer s(integer n,int *a)=(n>-1)? ((*(a+n))+s(n-1,a)):0;
*/
/*@
  requires n > 0;
  requires \valid_read(a + (0..n−1));
  ensures \result==s(n-1,a);
*/
int Sum_array(int a[], int n)
{
  int s = 0;
  /*@ 
  loop invariant s==s(i-1,a);
  loop invariant 0 <= i <= n;
  loop assigns s,i;
  loop variant n − i;
*/
  for (int i = 0; i < n; i++)
  {
    s += a[i];
  }
  return s;
}