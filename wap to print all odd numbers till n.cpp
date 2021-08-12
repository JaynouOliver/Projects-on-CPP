  //Wap to print all odd numbers till n//

#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification: not part of the code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  
    int n;
    int i;
    cin >> n;
    for (  i = 1; i <= n; i++){
       if (i%2 == 0){
            continue;
        }
        cout << i << endl;
    }


    return 0;
}


