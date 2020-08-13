#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printit(vector<int> &vec)
{
    for(int &v : vec)
    {
        cout<< v <<endl;
    }
}

int main()
{
    std::vector<int> vertices;

    for(int i =1;i<=5;i++)
    vertices.push_back(i);

    cout << "the size of the array is: " << vertices.size()<<endl;

    printit(vertices);
    vertices.resize(4);
    vertices.shrink_to_fit();
    printit(vertices);

    return 0;
}

