#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"number divisible by both 5 and 3";
    }
    else{
        cout<<"not divisible";
    }

}