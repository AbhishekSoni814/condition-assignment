/* Write a program to print absolute value of a number entered by the user.*/

#include<iostream>
using namespace std;
int main()
{
    int z;
    cout<<"Enter the number::";
    cin>>z;

    if(z<0)
    {
        z=z*(-1);
    }

    cout<<"Absolute value " <<z<<endl;
}