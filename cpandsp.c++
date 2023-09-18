/* Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate
Profit or Loss.*/

#include<iostream>
using namespace std;
int main()
{
    int amount,sp,cp;

    cout<<"Enter the selling price::";
    cin>>sp;

    cout<<"Enter the cost price::";
    cin>>cp;

    if(sp>cp)
    {
        amount=sp-cp;
        cout<<"Profit = "<<amount<<endl;
    }

    else if(cp>sp)
    {
        amount=cp-sp;
        cout<<"Loss = "<<amount<<endl;
    }

    else
    {
        cout<<"Neutral";
    }
}