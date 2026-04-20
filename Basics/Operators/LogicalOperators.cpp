#include <iostream>
using namespace std;
int main() 
{
    int x = 5, y = 10;
    cout << "LOGICAL OPERATORS IN C++" << endl;
    cout << "------------------------" << endl;
    cout << "(x < y && x > 0) = " << (x < y && x > 0) << endl;
    cout << "(x > y || x > 0) = " << (x > y || x > 0) << endl;
    cout << "!(x > y)         = " << !(x > y) << endl;
    return 0;
}