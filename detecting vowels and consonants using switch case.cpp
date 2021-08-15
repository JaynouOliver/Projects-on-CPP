
// Detecting a vowel or consonant through switch case.
#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.
    
    char alphabet;   
    cin >> alphabet;

    switch (alphabet)
    {
    case 'a':
        cout << "This is a vowel" << endl;
        break;
    case 'e':
        cout << "This is a vowel" << endl;
        break;
    case 'i':
        cout << "This is a vowel" << endl;
        break;
    case 'o':
        cout << "This is a vowel" << endl;
        break;
    case 'u':
        cout << "This is a vowel" << endl;
        break;
    case 'A':
        cout << "This is a vowel" << endl;
        break;
    case 'E':
        cout << "This is a vowel" << endl;
        break;
    case 'I':
        cout << "This is a vowel" << endl;
        break;
    case 'O':
        cout << "This is a vowel" << endl;
        break;
    case 'U':
        cout << "This is a vowel" << endl;
        break;
    default:
        cout << "This is consonant" << endl;
        break;
    }
    return 0;
}


