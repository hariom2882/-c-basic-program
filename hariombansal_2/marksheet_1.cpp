#include<iostream>
using namespace std;
int main(){
    int phy;
    int che;
    int math;
    int eng;
    int phe;
    cout<<"enter the phy no.";
    cin>>phy;
    cout<<"enter the che no.";
    cin>>che;
    cout<<"enter the math no.";
    cin>>math;
    cout<<"enter the eng no.";
    cin>>eng;
    cout<<"enter the phe no.";
    cin>>phe;
    cout<<"phy="<<phy<<endl;
    cout<<"che="<<che<<endl;
    cout<<"math="<<math<<endl;
    cout<<"eng="<<eng<<endl;
    cout<<"phe="<<phe<<endl;
    cout<<"addition="<<(phy+che+math+eng+phe)<<endl;
    cout<<"average="<<((phy+che+math+eng+phe)/5)<<endl;
    return 0;
}