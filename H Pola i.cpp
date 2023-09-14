/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n,k; 
    cin >> n >> k;
    
    for(int i=1; i<=n; i++){
        if(i%k) cout << i;
        else cout << '*';
        if(i < n) cout << ' ';
        else cout << '\n';
    } 
}
   
   
   
   
   
