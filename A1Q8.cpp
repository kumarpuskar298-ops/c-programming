#include<iostream>
using namespace std;
int main(){
int principal, rate, time, si;

cout<<"enter principal:";
cin>>principal;

cout<<"rate:";
cin>>rate;

cout<<"enter time:";
cin>>time;

si = principal*rate*time/100;

cout<<"simple interest:" <<si;

}
