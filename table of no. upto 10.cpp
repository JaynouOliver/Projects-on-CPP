#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   for ( int i = 1 ; i <= 10 ; i++){
       cout << i << "*" << n << "=" << i*n << endl;
       
   }
   

    return 0;
}


