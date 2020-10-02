#include <iostream>
#include <map>

using namespace std;


int main(){


    map<int, map<string,int>>Months;

    map<int, map<string,int>>::iterator out;
    map<string, int>:: iterator in;

    Months.insert(make_pair(1, map<string, int>())); 
    Months[1].insert(make_pair("January", 31));

    Months.insert(make_pair(1, map<string, int>())); 
    Months[2].insert(make_pair("February", 28)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[3].insert(make_pair("March", 31)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[4].insert(make_pair("April", 30)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[5].insert(make_pair("May", 31)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[6].insert(make_pair("June", 30)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[7].insert(make_pair("July", 31)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[8].insert(make_pair("August", 31)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[9].insert(make_pair("September", 30)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[10].insert(make_pair("October", 31)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[11].insert(make_pair("November", 30)); 

    Months.insert(make_pair(1, map<string, int>())); 
    Months[12].insert(make_pair("December", 31)); 




    string input;
    int key;
    cout<<"Enter the month of the year\n";
    cin>> input;
    for(out=Months.begin();out!=Months.end();out++){
        for(in=out->second.begin();in!=out->second.end();in++){

            if(in->first==input){
                cout<<in->second<<endl;
                //get the current position
                key = out->first;
                break;
            }
        }
    }
    //find the prev and next

    //get previous month and days

    auto itr = Months[(key-1)];
    auto prev = itr.begin();
    cout<<"The previous month is--->"<<prev->first<<endl<<"no of days is-->"<<prev->second<<endl;
    
    //get the next day.
    auto ptr = Months[(key+1)];
    auto next = ptr.begin();
    cout<<"The next month is--->"<<next->first<<endl<<"no of days is-->"<<next->second<<endl;

    return 0;
}