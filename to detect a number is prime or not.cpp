 // WAP to check a given number is prime or not.

#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification//
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code//

    int n; 
    cin >> n;

    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i == 0 )
        {
            cout << "This is  not a prime number" << endl;
            break;

        }
        
    }
    if (i == n)
    {
        cout << "This is a prime number" << endl;
    }
    
   
    

    return 0;
}


