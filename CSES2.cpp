#include <iostream> 
#include <stdlib.h>
#include <stdio.h> 
#include <vector> 
 
using namespace std; 
 
 
int main(){ 
    long long n = 0.0, sum = 0.0, asum = 0.0;
    
    cin >> n;

    asum = n * (n + 1) / 2 ; 
   
   for (int i = 1; i < n; i++) { 
        int a;
        cin >> a;
        sum = sum + a; 
     }
 
   cout<< asum - sum; 
 
}