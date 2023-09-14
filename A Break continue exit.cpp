/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        if(i==42){cout << "ERROR\n";break;}
        if(i%10) cout << i << '\n';
        else continue;
    }
}
   
   
   
   
   
