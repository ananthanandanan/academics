#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    queue<int> temp;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    cout << endl;
    cout << "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;
    q.emplace(3);
    q.emplace(6);
    q.emplace(7);
    int tmp;
    while (!q.empty())
    {
        tmp = q.front();
        cout << tmp << " ";
        q.pop();
    }
    queue<int> q1;
    queue<int> q2;
    q1.emplace(10);
    q1.emplace(20);
    q2.emplace(30);
    q2.emplace(40);
    q2.emplace(50);

    queue<int> temp1;
    while (!q1.empty())
    {
        temp1.push(q1.front());
        q1.pop();
    }
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    while (!temp1.empty())
    {
        q2.push(temp1.front());
        temp1.pop();
    }

    cout << endl;
    cout << q.size() << endl;
    cout << q1.size() << endl;
    cout << q2.size() << endl;
    return 0;
}