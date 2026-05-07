#include<iostream>
using namespace std;

int fun(int x, int y){
  int  z=x-y;
    return z;
}
 float fun(float x, float y){
    int z=x+y;
    return z;
 }

int main(){
    int a,b,c;
    cout<<"enter the value of a & b:";
    cin>>a>>b;
    c=fun(a,b);
    cout<<c<<"\n";










    float d,e,f;
    cout<<"enter the value of d & e:";
    cin>>d>>e;
    f=fun(d,e);
    cout<<f;

}
