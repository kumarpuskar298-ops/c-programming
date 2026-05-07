#include<iostream>
using namespace std;
int main()
{

    int addition, subtraction, multiplication, division;
    int n1,n2;
    char op;

    cout<<"enter operator (+,-.*,/):";
    cin>>op;

    cout<<"enter 1st number:";
    cin>>n1;

    cout<<"enter 2nd number:";
    cin>>n2;

    if(op=='+')
    {
        addition=n1+n2;
        cout<<"addition:" <<addition;
    }

    else if(op=='-')
    {
        subtraction=n1-n2;
        cout<<"subtraction:" <<subtraction;
    }

    else if(op=='*')
    {
        multiplication=n1*n2;
        cout<<"multiplication:" <<multiplication;
    }

    else if(op=='/')
    {
        division=n1/n2;
        cout<<"division:" <<division;
    }

    else
    {
      cout<<"error";
    }







}


