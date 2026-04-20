#include <iostream>
using namespace std;
int main() 
{
    cout << "CONDITIONAL (TERNARY) OPERATOR IN C++" << endl;
    cout << "------------------------------------" << endl;
    int a = 10, b = 20;
    // Case 1: Finding the maximum of two numbers
    int max = (a > b) ? a : b;
    cout << "Case 1: Maximum of a and b = " << max << endl;
    // Case 2: Checking even or odd
    int num = 7;
    cout << "Case 2: Number " << num << " is "
         << ((num % 2 == 0) ? "Even" : "Odd") << endl;
    // Case 3: Assigning value based on condition
    int x = 5;
    int result = (x > 0) ? 1 : -1;
    cout << "Case 3: Result based on x > 0 = " << result << endl;
    // Case 4: Nested conditional operator
    int marks = 85;
    char grade = (marks >= 90) ? 'A' :
                 (marks >= 75) ? 'B' :
                 (marks >= 60) ? 'C' : 'D';

    cout << "Case 4: Marks = " << marks << ", Grade = " << grade << endl;
    // Case 5: Conditional operator with expressions
    int p = 4, q = 6;
    int value = (p < q) ? (p + q) : (p - q);
    cout << "Case 5: Conditional expression result = " << value << endl;
    return 0;
}