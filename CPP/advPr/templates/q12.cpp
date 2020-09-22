#include <iostream>

/*!This is just a template for lazy people */
template <typename T>
void Array_init()
{
    std::cout << "enter the length of array:" << std::endl;
    int n, s, j, p = 0;
    std::cin >> n;
    T a[n];
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    T r = a[0];
    s = 1;
    j = 1;
    while (j != n)
    {
        if (a[j] == r)
            p += 1;
        else
        {
            a[s++] = a[j];
            r = a[j];
        }
        j += 1;
    }
    std::cout << "the current array is:" << std::endl;
    for (int i = 0; i < n - p; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
}

int main()
{
    Array_init<int>();
    Array_init<float>();
    Array_init<std::string>();
}
