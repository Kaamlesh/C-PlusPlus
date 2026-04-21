#include <iostream>
using namespace std;
int main() 
{
    int age = 20;
    int voter_id = 1;
    if (age >= 18) 
    {
        if (voter_id == 1) 
        {
            cout << "Eligible to vote";
        } 
        else 
        {
            cout << "Voter ID required";
        }
    } 
    else 
    {
        cout << "Not eligible to vote";
    }
    return 0;
}