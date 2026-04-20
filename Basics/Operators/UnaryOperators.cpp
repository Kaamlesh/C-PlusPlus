#include <iostream>
using namespace std;
int main() 
{
    int x = 5;
    cout << "UNARY OPERATORS IN C++" << endl;
    cout << "----------------------" << endl;
    cout << "Initial value of x = " << x << endl;
    cout << "Unary minus (-x) = " << -x << endl;
    cout << "Pre-increment (++x) = " << ++x << endl;
    cout << "Post-increment (x++) = " << x++ << endl;
    cout << "Value after post-increment = " << x << endl;
    cout << "Pre-decrement (--x) = " << --x << endl;
    cout << "Post-decrement (x--) = " << x-- << endl;
    cout << "Value after post-decrement = " << x << endl;
    return 0;
}