#include<iostream>
using namespace std;
int main(){

int sub1, sub2, sub3, total_marks, percentage;
cout<<"enter the marks of sub1:";
cin>>sub1;

cout<<"enter the marks of sub2:";
cin>>sub2;

cout<<"enter the marks of sub3:";
cin>>sub3;

 total_marks= sub1+sub2+sub3;
 cout<< "total:" << total_marks<<"\n";

 percentage= (total_marks*100)/300;
 cout<< "percentage:" <<percentage;


}
