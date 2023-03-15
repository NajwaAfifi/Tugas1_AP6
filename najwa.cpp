#include <iostream>

using namespace std;

int main() {

    
    cout << "Input bilangan pertama: ";
    cin >> a;
    cout << "Input bilangan kedua: ";
    cin >> b;

  
    cout << "a & b = " << (a & b) << endl; //and
    cout << "a | b = " << (a | b) << endl; //or
    cout << "a ^ b = " << (a ^ b) << endl; //xor
    cout << "b << 1" <<" = "<< (b << 1) << endl; //shl
    cout << "b >> 1 "<<"= " << (b >> 1 )<< endl; //shr
  
    return 0;
}