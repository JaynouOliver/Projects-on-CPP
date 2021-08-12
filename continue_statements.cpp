#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i;
    for ( i = 0; i <= 20; i++){
        if (i%3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }



    return 0;
}


