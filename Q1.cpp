#include<iostream>
using namespace std;

int main(){

int a,b, c;

cout<<"enter 1st number:";
cin>>a;

cout<<"enter 2nd number:";
cin>>b;

c = a;
a = b;
b = c;

cout<<"1st sweap number:"<<a;
cout<<"\n2nd swap number:"<<b;

}
