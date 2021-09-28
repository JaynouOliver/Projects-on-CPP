// Calculating nCr 
#include <iostream>
#include <math.h>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;

    }
    return factorial;
}

int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

   int n, r;
   cin >> n >> r;

   int ans = fact(n)/(fact(r) * fact(n-r));
   cout << ans << endl;


    return 0;
}
