#include<iostream>
using namespace std;
int main(){
    int p;
    int t;

    cout<<"enter the number p="<<endl;
    cin>>p;
    cout<<"enter the number t="<<endl;
    cin>>t;

    cout<<endl;

    for (int i=p; i <=t; i++)
    {
        cout<<t*i<<endl;
    }

    cout<<endl;

    int n;
    int tt;

    cout<<"enter the number"   ;  
    cin>>n;
    cout<<"enter the number " ;   
    cin>>tt;

    cout<<endl;

    for( int p=n ; p <= tt; p++)
    {
        cout<<tt<<"*"<<n<<"="<<tt*n<<endl;
    }
    
    cout<<endl;

int q=1;
  while (q<=10)
  {
   cout<<2<<"*"<<q<<"="<<2*q <<endl;
   q++;
  }


}