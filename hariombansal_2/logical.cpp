#include<iostream>  
using namespace std;
int main(){
    int a;
    int b;
    int result;
    cout<<"enter the number a="<<endl;
    cin>>a;
    cout<<"enter the number b="<<endl;
    cin>>b;
    result=(a<b)||(b>a);
    cout<<"(a<b)||(b>a) is"<<result<<endl;

    result=(a=b)&&(b>a);
    cout<<"(a=b)&&(b>a) is"<<result<<endl;

    result=!(b>a);
    cout<<"!(b>a) is"<<result<<endl;

    return 0;
}