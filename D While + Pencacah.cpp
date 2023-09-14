/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    
    char masukan [100];
    int ans =0;
    
    while(scanf("%s", masukan) !=EOF){
        ans += atoi(masukan);
    }
    
    cout << ans << endl;
    
}
