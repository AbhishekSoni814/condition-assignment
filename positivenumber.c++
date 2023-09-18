/* Write a program to print positive number entered by the user, if user enters a negative number,
it is skipped*/

#include<iostream>
using namespace std;
int main()
{
    int term;

    cout<<"Enter the number::";
    cin>>term;

    if(term > 0)
    {
        cout<<"Your number is positive = "<<term <<endl;
    }
    else
    {
        cout<<"Your number is negative so its get skipped = " <<term <<endl;
    }
}