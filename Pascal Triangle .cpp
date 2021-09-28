// Pascal Triangle 
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

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i)/(fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    

    


    return 0;
}
