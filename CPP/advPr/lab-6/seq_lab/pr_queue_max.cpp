#include <bits/stdc++.h>
using namespace std;

priority_queue<vector<int>> pq;

void Print_Maximum_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}


int main()
{

    vector<int> data_1{10, 20, 30, 40};
    vector<int> data_2{10, 20, 35, 40};
    vector<int> data_3{30, 25, 10, 50};
    vector<int> data_4{20, 10, 30, 40};
    vector<int> data_5{5, 10, 30, 40};

    pq.push(data_1);
    pq.push(data_2);


    Print_Maximum_Vector(pq.top());

    pq.push(data_3);

    Print_Maximum_Vector(pq.top());

    pq.push(data_4);
    pq.push(data_5);

    Print_Maximum_Vector(pq.top());

    return 0;
}