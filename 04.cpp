#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n%5==0 &&n%11==0){
        cout<<"give the number both is divisible by 5 and 11 ";
    }
    else{
        cout<<"give number is not divisible by 5 and 11";
    }
    return 0;
    }

