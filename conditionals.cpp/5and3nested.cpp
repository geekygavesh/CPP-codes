#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"number divisble by both 5 and 3";
        }
        else{
            cout<<"divisible by 5 but not 3";
        }
    }
    else{
        cout<<"not matching conditons";
    }
}                       