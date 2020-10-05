#include <bits/stdc++.h>
#include <queue>

using namespace std;


void showpq( priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pQ) 
{ 
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pV = pQ; 
    vector<int> TOP_Vector = pV.top();
    cout<<"The vector minumum is :"<<endl;
    for (int i = 0; i < TOP_Vector.size(); i++)
    {
        cout << TOP_Vector[i] << " ";
    }
    cout << endl;
} 



int main(){

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> Queue_p;

    vector<int> data_1{10, 20, 30, 40};
    vector<int> data_2{10, 20, 35, 40};
    vector<int> data_3{30, 25, 10, 50};
    vector<int> data_4{20, 10, 30, 40};
    vector<int> data_5{5, 10, 30, 40};

    //push it

    Queue_p.push(data_1);
    Queue_p.push(data_2);
    Queue_p.push(data_3);
    Queue_p.push(data_4);
    Queue_p.push(data_5);

    showpq(Queue_p);



    return  0;

}