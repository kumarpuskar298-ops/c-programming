#include<iostream>
using namespace std;
int main(){
int n, *a, *b, *c, i;
cout<<"enter size of array:";
cin>>n;

a=(int*)malloc(n*sizeof(int));
for(i=0; i<n; i=i+1){
    cin>>a[i];
}

b=(int*)malloc(n*sizeof(int));
for(i=0; i<n; i=i+1){
    cin>>b[i];
}

c=(int*)malloc(n*sizeof(int));
for(i=0; i<n; i=i+1){
    c[i]=a[i]+b[i];
    cout<<c[i];
}
}
