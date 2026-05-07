#include<iostream>
using namespace std;

int main(){

int gross_salary, basic_salary, other_allowances, hra, da;
cout<<"enter basic salary:";
cin>>basic_salary;

da = basic_salary*0.2;
hra =basic_salary*0.4;
other_allowances=basic_salary*0.5;

gross_salary = basic_salary + hra + da + other_allowances;

cout<<"gross_salary:"<<gross_salary;

}
