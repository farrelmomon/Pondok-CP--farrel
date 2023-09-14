/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n, b=1e6, a=-b, x; 
    cin >> n;  
    
    for(int i=0; i<n;i++){
        cin >> x;
        a = max(a,x);
        b = min(b,x);
        
    }cout << a << ' ' << b << '\n';
      
}
   
   
   
   
   
   
