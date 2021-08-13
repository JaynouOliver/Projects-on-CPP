 // WAP to print all prime numbers within a given range.

#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.}
    freopen("input.txt", "r", stdin);                           //} 
    freopen("output.txt", "w", stdout);                         //}
#endif                      // This is not part of the code.    //}
    int a ,b;
    cin  >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for ( i = 2; i < num; i++)
        {
            if (num%i == 0){
                break;
            }
        }
        
        if ( i == num){
            cout << num << endl;
        }
    }
    
    
    return 0;
}


