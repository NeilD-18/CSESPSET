#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector> 

#define ll long long 

using namespace std;

int main() { 
    ll n; 
    cin >> n;

    ll count = 0; 
    vector<int> arr = {};

    for(ll  i = 0; i<n; i++) { 
        ll a; 
        cin >> a;
        arr.push_back(a); 
 }
   
    for(int z = 0; z<n-1; z++ ){
        if (arr[z] > arr[z+1]) {
            count = count + (arr[z] - arr[z+1]);
            arr[z+1] = arr[z+1] + (arr[z] - arr[z+1]);
            
         }
    }

    cout<<count; 
}

