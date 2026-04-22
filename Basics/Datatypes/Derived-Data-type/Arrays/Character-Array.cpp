#include<iostream>
using namespace std;
int main()
{
    /*
    char str[]; declaration
    char str[] = {"K","A","M","L","E","S","H"}; initialization
    */
    char name[20];
    cout << "Enter name: ";
    cin >> name;   // reads only one word
    cout << "Name: " << name;
    return 0;
}
/*
other methods to get input and access character array

1)Using cin.get() (Character by Character)

#include <iostream>
using namespace std;
int main() 
{
    char msg[50];
    cout << "Enter message: ";
    cin.get(msg, 50);
    cout << "Message: " << msg;
    return 0;
}

2) Using cin.getline()

#include <iostream>
using namespace std;

int main() 
{
    char address[100];
    cout << "Enter address: ";
    cin.getline(address, 100);
    cout << "Address: " << address;
    return 0;
}

3)Using Loop

#include <iostream>
using namespace std;
int main() 
{
    char str[50];
    int i = 0;
    cout << "Enter characters (end with $): ";
    while (true) 
    {
        cin >> str[i];
        if (str[i] == '$') 
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    cout << "Output: ";
    for (i = 0; str[i] != '\0'; i++) 
    {
        cout << str[i];
    }
    return 0;
}

4)Using putchar() and getchar()

#include <cstdio>

int main() 
{
    char ch;
    ch = getchar();
    putchar(ch);
    return 0;
}

only the following read all the words or entire line
cin.getline()
cin.get()
Character-by-character input using cin.get() / getchar() loop
*/


/*
In C++, a character array is a sequence of characters stored in contiguous memory locations. These are often referred to as C-style strings because they were inherited from the C language. 

Key Characteristics
Null Termination: To be treated as a string, a character array must end with a null character ('\0'). This tells functions like cout where the string ends.
Fixed Size: Once declared, the size of a character array is static and cannot be changed.
Memory Management: You must manually ensure the array is large enough to hold the intended text plus the null terminator. 

Declaration and Initialization
You can initialize character arrays in several ways:
Using a String Literal: char greeting[] = "Hello"; (The compiler automatically adds '\0', making the size 6).
Character by Character: char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'}; (You must manually include the '\0').
With Fixed Size: char greeting[10] = "Hello"; (The remaining 4 spaces are typically initialized to \0). 

Common Operations
Since character arrays are primitive types, they do not have built-in methods. You must use functions from the <cstring> (or <string.h>) library: 
strlen(arr): Returns the number of characters before the null terminator.
strcpy(dest, src): Copies the content of one array to another.
strcat(dest, src): Appends (concatenates) one string to the end of another.
strcmp(s1, s2): Compares two strings lexicographically. 

Input and Output
cin >> arr;: Reads input until the first whitespace (space, tab, newline).
cin.get(arr, size);: Reads a full line, including spaces, up to a specified size.
cout << arr;: Prints the array until it encounters a null character. 

Comparison: Char Array vs. std::string
While character arrays are efficient for fixed-length data, modern C++ generally prefers the std::string class for its flexibility and safety.*/