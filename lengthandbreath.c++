/* Write a program which takes the values of length and breadth from user and check if it is a square or not.*/

#include<iostream>
using namespace std;
int main()
{
    int length,breadth,area;
    cout<<"Enter the length::";
    cin>>length;

    cout<<"Enter the breadth::";
    cin>>breadth;

    if(length==breadth)
    {
        cout<<"Its is a square";
    }
    else
    {
        cout<<"It is not a square";
    }
}