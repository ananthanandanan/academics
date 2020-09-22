#include <iostream>
#include <string>
template <typename T>
class Array
{
private:
    int n;
    T a[1000];

public:
    void setlength(int x) { n = x; }
    void setArray(T b[])
    {
        for (int i = 0; i < n; i++)
            a[i] = b[i];
    }
    int search(T e) { 
        for(int i=0;i<n;i++){
            if(a[i]==e)return i;
        }
        return n;
    }
    void display()
    {
        for (int i = 0; i < n; i++)
            std::cout << a[i] << " ";
        std::cout << "\n";
    }
};
template<typename g>
void init(Array<g> obj){
    int n;
    std::cout << "Enter the length of the array:" << std::endl;
    std::cin >> n;
    obj.setlength(n);
    g b[n];
    g c;
    std::cout<<"Enter the array elements:"<<std::endl;
    for (int i = 0; i < n; i++)
        std::cin >> b[i];
    obj.setArray(b);
    obj.display();
    std::cout << "Enter the element you want to search:" << std::endl;
    std::cin >> c;
    int s = obj.search(c);
    if (s ==n)
        std::cout << "The element is not found" << std::endl;
    else
        std::cout << "The element " << c << " is at position " << s << std::endl;

}

int main()
{
    Array<int> obj1;
    Array<float> obj2;
    Array<std::string> obj3;
    std::cout<<"Enter data for an integer array:"<<std::endl;
    init(obj1);
    std::cout<<"Enter data for an floating array:"<<std::endl;
    init(obj2);
    std::cout<<"Enter data for an string array:"<<std::endl;
    init(obj3);
}