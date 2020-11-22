

/*@
    requires n>0;
    behavior one:
    assumes n>0;
    ensures \result == n;

    behavior two:

    assumes n<0;
    ensures \result == (-1)*n;

    complete behaviors;
    disjoint behaviors;

 */

int  ABS(int n)
{

    if (n < 0)
    {
        n = (-1) * n;
    }

    return n;
}