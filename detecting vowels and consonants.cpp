#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
    char c;
    int uppercase , lowercase;

    cin >> c;
    lowercase = ( c == 'a' || c =='e' || c == 'i'||  c == 'o' ||  c == 'u');
    uppercase = ( c == 'A' || c =='E' || c == 'I'||  c == 'O' ||  c == 'U');
    
    if (lowercase || uppercase){
        cout << c << " is a vowel" << endl;
    }else {
        cout << c << " is not a vowel" << endl;
    }

    
    return 0;
}


