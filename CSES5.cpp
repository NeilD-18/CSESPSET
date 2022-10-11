#include <iostream>
#include <stdlib.h>
#include <vector> 
#define ll long long   

using namespace std; 

int main() {
    ll n; 
    cin >> n; 

// case 1
    if ( n == 1)  {
        cout << n; 
        return 0;      
    }
// case 2 3 
    if ( n == 2 || n == 3 ) { 
        cout << "NO SOLUTION"; 
        return 0; 
    }
    
   
//other cases (print evens and then odds.)
for (int i = 2; i <= n ; i = i + 2) {
    cout << i << " "; 
        }
       
for (int i = 1; i <= n ; i = i + 2) { 
    cout << i << " "; 
        }
   
    }
