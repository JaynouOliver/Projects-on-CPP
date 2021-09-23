// Prime number in Different Andaaz
#include <iostream>
#include <cmath>>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.
    
    int n;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            cout << "Non-Prime Number"<< endl;
            flag  = 1;
            break;
        }
        
    }
    
    if (flag == 0) 
    {
        cout << "Prime Number" << endl;
    }
    

    return 0;
}
