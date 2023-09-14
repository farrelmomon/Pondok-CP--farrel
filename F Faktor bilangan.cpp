/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // untuk mempercepat proses cin gunakan baris berikut
    
    
    int n; cin >>n;
    
    for(int i =n; i >=1; i --){
        if(n%i ==0) cout << i << '\n';
    }
}
