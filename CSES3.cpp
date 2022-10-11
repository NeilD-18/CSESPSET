#include <iostream> 
#include <stdlib.h>
#include <string>


using namespace std; 

int main() {

   string DNA; 
   cin >> DNA; 

   int count = 0;
   int ans = 0; 

   for (int i=0; i < DNA.length()-1; i++) {
       if (DNA[i] == DNA[i+1]) { 
           count++;
        
       } else {
           count = 1; 
           
       }
       ans = max(ans, count); 

   }

   cout<<ans; 






}