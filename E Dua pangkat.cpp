/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    while(n%2 ==0){
        n = n/2;
    }
    
    
    if(n == 1){
        cout << "ya" << endl;
    }else{
        cout << "bukan" << endl;
    }
    
}
