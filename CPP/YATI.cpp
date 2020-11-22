// CPP program to demonstrate the
// set::lower_bound() function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	vector<int> s;

	// Function to insert elements
	// in the set container
	
	s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(3);
    s.push_back(5);
    s.push_back(6);

    auto itr = lower_bound(s.begin(), s.end(), 4);
    cout<< *itr<<endl;
	cout << "The set elements are: ";
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";

	return 0;
}
