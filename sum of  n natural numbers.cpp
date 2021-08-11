#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
   int n;
   cin >> n;
   int sum = 0;
   for (int i = 1; i <=n; i++)
   {
       sum = sum + i;
   }
   cout << "The answer is " << sum << endl;
   

    return 0;
}


