#include <iostream>
using namespace std;
int main() 
{
    int a = 5, b = 3;
    cout << "BITWISE OPERATORS IN C++" << endl;
    cout << "------------------------" << endl;
    cout << "a = " << a << " (0101), b = " << b << " (0011)" << endl;
    cout << "Bitwise AND (a & b)  = " << (a & b) << endl;
    cout << "Bitwise OR (a | b)   = " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b)  = " << (a ^ b) << endl;
    cout << "Bitwise NOT (~a)     = " << (~a) << endl;
    cout << "Right Shift (a >> 1) = " << (a >> 1) << endl;
    cout << "Left Shift (a << 1)  = " << (a << 1) << endl;
    return 0;
}