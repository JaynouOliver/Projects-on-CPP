#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;
    cin >> a;

    if (a%2 == 0){
        cout << "Even Number" << endl;
    }else{
        cout<< "Odd Number" << endl;
    }
  


    return 0;
}

