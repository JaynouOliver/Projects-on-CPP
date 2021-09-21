// ZigZag Pattern
#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.
    
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1 ; j <= n; j++)
        {
            if ( (i+j) % 4 == 0 || i == 2 && j%4 == 0)
            {
                cout << " *";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    

    return 0;
}
