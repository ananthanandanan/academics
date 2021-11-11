#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    /* n: the coordinate of lanterns
       l: length of the street.
    */

    int n, l;
    cin>>n>>l;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    //Sort the street lanterns according to their positions
    sort(arr, arr+n);
    // Get the most suitable arbitary distance from both start and end positions of the lanterns
    int d = 2* max(arr[0], l-arr[n-1]);
    
    // Search through the inbetween distance to see if there exist a distance that is greater than current distance
    for(int i=1;i<n;i++){

        d = max(d,(arr[i] - arr[i-1]));
    }

    cout<< d/2;


    return 0;

}