

#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.
    
    float a ,b;
  cout << "enter two numbers" << endl;
  cin >> a >> b ;
  char op;
  cin >> op;

  switch (op)
  {
  case '+':
    cout << a + b << endl;
    break;
  
  case '-':
    if ( a > b){
      cout << a - b << endl; // this code specially substracts the bigger number from the smaller one.
    }else{
      cout << b - a << endl;
    }
    break;
  
  case '*':
    cout << a * b << endl;
    break;  
  
  case '/': // this code divides the bigger number from the smaller one.
    if (a > b)
    {
      cout << a / b << endl;
    }else{
      cout << b / a << endl;
    }
    
    break;
  
  default:
    cout << "operator not found" << endl;
    break;
  }
     
    return 0;
}


