#include<iostream>
using namespace std;
int main(){

int first_angle, second_angle, third_angle;

cout<<"enter the first angle:";
cin>>first_angle;

cout<<"enter the second angle:";
cin>>second_angle;

third_angle = 180 -(first_angle + second_angle);
cout<<"area of triangle:"<<third_angle;
}
