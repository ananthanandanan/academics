/*@requires\valid(a) &&\valid(b);
ensures *a ==\old(*b) && *b ==\old(*a);*/
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}