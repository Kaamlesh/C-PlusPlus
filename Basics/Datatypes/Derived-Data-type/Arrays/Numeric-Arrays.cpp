#include<iostream>
using namespace std;
int main()
{
    // int a[10]; array initialization
    // int a[] = {1,2,3,4,5}; array declaration
    
    //getting array input from the user
    int a[10];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0 ; i<n ; i++)
    {
        cout<<"enter "<<i<<" element for array : ";
        cin>>a[i];
        cout<<endl;
    }
    // printing or accessing the elements in the array
    for(int i=0 ;i<n ; i++)
    {
        cout<<a[i]<<endl;
    }
    /*
    float a[];
    double a[];
    all numeric type of arrays are available
    */
    return 0;
}
/*
An array in C++ is a fixed-size, linear data structure used to store a sequential collection of elements of the same data type in contiguous memory locations. Instead of declaring separate variables for related data, arrays allow you to manage them under a single name. 
GeeksforGeeks
GeeksforGeeks
 +2
Key Characteristics
Fixed Size: The number of elements an array can hold is determined at the time of declaration and cannot be changed during program execution.
Same Data Type: All elements within an array must be of the identical type, such as int, char, or user-defined types like struct.
Contiguous Memory: Elements are stored in adjacent memory addresses, which allows for efficient access and retrieval.
Zero-Based Indexing: Access to any element is done via an index number, which starts at 0 for the first element and ends at size - 1 for the last element. 
YouTube
YouTube
 +5*/