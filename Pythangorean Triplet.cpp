// Pythogorean Triplet
#include <iostream>
#include <math.h>
using namespace std;

bool check(int x, int y, int z){
    int a = max( x, y, z) ;
    int b, c;
    
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c)
    {
        return true;
    }
    else{
        return false;
    }
    
}


int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

   int x, y, z;
   cin >> x >> y >> z;

   if (check(x , y , z))
   {
       cout << "This is a Pythogorean Triplet" << endl;
   }
   else{
       cout << "This is not a Pythogorean Triplet" << endl;
   }
   
}
