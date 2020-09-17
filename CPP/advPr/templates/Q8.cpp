#include <iostream>

template <typename t>
t myMax(t one, t two)
{
    if (one == two)
        return one;
    return one > two ? one : two;
}
int main()
{
    int a = 3;
    int b = 5;
    std::cout << "The max of " << a << " and " << b << " is " << myMax(a, b) << std::endl;
    float a1 = 5.6, b1 = 7.3;
    std::cout << "The max of " << a1 << " and " << b1 << " is " << myMax(a1, b1) << std::endl;
    std::string a2("donkey");
    std::string b2("apple");
    std::cout << "The max of " << a2 << " and " << b2 << " is " << myMax(a2, b2) << std::endl;
}