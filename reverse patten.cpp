// Prime number in Different Andaaz
#include <iostream>
#include <cmath>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.
    
    int n;
    cin >> n;

    int reverse = 0;
    while (n > 0)   
    {
        int lastdigits = n%10;
        reverse = reverse*10 + lastdigits;
        n = n / 10;
    }
    
    cout << reverse << endl;

    

    return 0;
}
