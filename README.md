#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
   int a , b;
   cin >> a >> b;
    if ( a > b){
        cout << a <<  " is the largest number" << endl;
    }else {
        cout << b << " is the largest number" << endl;
    }
    
    return 0;
}


