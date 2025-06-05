#include<iostream>
using namespace std;
int main(){
    int a;                                            
    int b;
    // int result;
    cout<< "enter the number a=";
    cin>>a;
    cout<<"enter the number b=";
    cin>>b;
    // result=(a==b);
    cout<<"a==b is"<<(a==b)<<endl; 
    cout<<"a+=b is"<<(a+=b)<<endl;
    cout<<"a-=b is"<<(a-=b)<<endl;
    cout<<"a*=b is"<<(a*=b)<<endl;
    cout<<"a/=b is"<<(a/=b)<<endl;
    cout<<"a%=b is"<<(a%=b)<<endl;
    return 0;
}