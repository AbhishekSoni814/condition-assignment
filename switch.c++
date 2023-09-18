/*Create a calculator using switch statement to perform addition, subtraction, multiplication and division*/

#include<iostream>
using namespace std;
int main()
{
    char op;
    float n1,n2;
     cout<<"Enter the operator :: ";
     cin>>op;

     cout<<"Enter the First Number :: ";
     cin>>n1;
     cout<<"Enter the second number :: ";
     cin>>n2;

     switch (op){
        case '+':
        cout<< n1 << "+" << n2 <<"=" << n1+n2;
        break;

        case '-':
        cout<< n1 << "+" << n2 <<"=" <<n1-n2;
        break;

        case '*':
        cout<< n1 << "*" << n2 << "=" <<n1*n2;
        break;

        case '/':
        cout<< n1 << "/" << n2 <<"=" <<n1/n2;
        break;

        default:
        cout<<"You enter the woring operator";
     }
}