	
// C++ program to check if two given strings 
// are rotations of each other 
# include <bits/stdc++.h> 
using namespace std; 


bool areRotations(string str1, string str2) 
{ 

if (str1.length() != str2.length()) 
		return false; 

string temp = str1 + str1; 
return (temp.find(str2) != string::npos); 
} 

int main() 
{ 
string str1, str2; 
cout<<"Enter the strings"<<endl;
cin>>str1>>str2;
if (areRotations(str1, str2)) 
	cout<<"true";
else
	cout<<"false"; 
return 0; 
} 
