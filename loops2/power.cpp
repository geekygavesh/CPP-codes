#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter base: ";
    cin>>a;
    cout<<"enter exponent: ";
    cin>>b;
    bool flag = true; // power positive
    if(b<0){
        flag = false; // negative power
        b = -b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    if(flag==false){
        power = 1/power;
        b=-b;
    }
    if(a==0 && b==0) cout<<"not defined";
    else cout<<a<<" raise to power "<<b<<" is "<<power;
}