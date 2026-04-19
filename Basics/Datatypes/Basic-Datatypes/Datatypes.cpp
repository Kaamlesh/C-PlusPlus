/*
the basic datatypes in C++ are 

-> Numeric - integer , floating point , double.

"the numeric also have type unsigned , signed , short , long , signed long , unsigned long " 

-> Character - char [it stores only single character].

"the character also have type signed , unsigned "

-> String - it stores group of character.
-> Bool - it stores boolean values(true has value a 1, false has value as 0).

Important note:
In standard C++, the following do NOT exist:

unsigned float / signed float
short float / long float
unsigned double / signed double
short double / long double
unsigned long double / signed long double

*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    int a = 10;
    cout << "int: Stores whole numbers. Value = " << a
         << ", Size = " << sizeof(a) << " bytes" << endl;

    unsigned int b = 20;
    cout << "unsigned int: Stores only positive whole numbers. Value = " << b
         << ", Size = " << sizeof(b) << " bytes" << endl;

    signed int c = -30;
    cout << "signed int: Stores positive and negative numbers. Value = " << c
         << ", Size = " << sizeof(c) << " bytes" << endl;

    short int d = 100;
    cout << "short int: Uses less memory for small integers. Value = " << d
         << ", Size = " << sizeof(d) << " bytes" << endl;

    long int e = 100000;
    cout << "long int: Stores large integers. Value = " << e
         << ", Size = " << sizeof(e) << " bytes" << endl;

    signed long int f = -200000;
    cout << "signed long int: Stores large signed integers. Value = " << f
         << ", Size = " << sizeof(f) << " bytes" << endl;

    unsigned long int g = 300000;
    cout << "unsigned long int: Stores large positive integers only. Value = " << g
         << ", Size = " << sizeof(g) << " bytes" << endl;

    float h = 3.14f;
    cout << "float: Stores decimal values (single precision). Value = " << h
         << ", Size = " << sizeof(h) << " bytes" << endl;

    double i = 3.141592;
    cout << "double: Stores decimal values (double precision). Value = " << i
         << ", Size = " << sizeof(i) << " bytes" << endl;

    long double j = 3.1415926535;
    cout << "long double: Stores high precision decimal values. Value = " << j
         << ", Size = " << sizeof(j) << " bytes" << endl;

    char k = 'A';
    cout << "char: Stores a single character. Value = " << k
         << ", Size = " << sizeof(k) << " byte" << endl;

    string l = "Hello";
    cout << "string: Stores a sequence of characters. Value = " << l
         << ", Size = " << sizeof(l) << " bytes (object size)" << endl;

    cout << "\n--- Invalid / Non-Existent Data Types in C++ ---\n";

    cout << "unsigned float: Not valid. Float is signed by default." << endl;
    cout << "signed float: Not valid in C++." << endl;
    cout << "short float: Not supported in C++." << endl;
    cout << "long float: Not supported in C++." << endl;
    cout << "unsigned long float: Not supported in C++." << endl;
    cout << "signed long float: Not supported in C++." << endl;

    cout << "unsigned double: Not valid. Double is signed by default." << endl;
    cout << "signed double: Not valid in C++." << endl;
    cout << "short double: Not supported in C++." << endl;
    cout << "unsigned long double: Not supported in C++." << endl;
    cout << "signed long double: Not supported in C++." << endl;

    return 0;
}

/*
 -> the sizeof(); returns no of bytes allocated for a specific type
   Float VS Double 

   +---------------+-----------------------------------------------+-------------------------------------------------------------+
| Feature       | float                                         | double                                                      |
+---------------+-----------------------------------------------+-------------------------------------------------------------+
| Definition    | Stores decimal numbers using single precision | Stores decimal numbers using double precision               |
| Size          | Usually 4 bytes                               | Usually 8 bytes                                             |
| Precision     | About 6–7 decimal digits                      | About 15–16 decimal digits                                  |
| Accuracy      | Less accurate                                 | More accurate                                               |
| Memory usage  | Uses less memory                              | Uses more memory                                            |
| Speed         | Slightly faster on some systems               | Slightly slower than float                                  |
| Default type  | Not default for decimal constants             | Default type for decimal constants                          |
| Use case      | Used when memory is limited and accuracy      | Used when high accuracy is required (scientific, financial) |
|               | is not critical                               | calculations                                                |
+---------------+-----------------------------------------------+-------------------------------------------------------------+
*/