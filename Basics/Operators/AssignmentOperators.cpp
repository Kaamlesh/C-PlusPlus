#include <iostream>
using namespace std;
int main() 
{
    int a = 10;
    cout << "ASSIGNMENT OPERATORS IN C++" << endl;
    cout << "---------------------------" << endl;
    cout << "Initial value of a = " << a << endl;
    a += 5;
    cout << "After a += 5, a = " << a << endl;
    a -= 3;
    cout << "After a -= 3, a = " << a << endl;
    a *= 2;
    cout << "After a *= 2, a = " << a << endl;
    a /= 4;
    cout << "After a /= 4, a = " << a << endl;
    a %= 3;
    cout << "After a %= 3, a = " << a << endl;
    return 0;
}