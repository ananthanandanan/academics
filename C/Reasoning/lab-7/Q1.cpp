/*@
     requires n>0 && n<100;
     ensures \result==n*(n+1)*((2*n)+1)/6;
*/

int sq(int n)
{
  int s=0;
  int i=1;
/*@
  loop invariant s == ( (i-1)*i*((2*i)-1) )/6;
  loop invariant 1<=i<=n+1;
  loop assigns s, i;
  loop variant n-i;
*/
  while(i<=n)
  {
    s=s+(i^2);
    i=i+1;
   }
  return s;
}
