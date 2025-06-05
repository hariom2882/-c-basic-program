#include<iostream>
using namespace std;
int main(){
    int number=0;
    int sum=0;
    
    //  cout<<"enter the sum number=";
    //  cin>>sum;
    do
    {
        sum+=number;
         cout<<"enter the number=";
        cin>>number;
//    cout<<"sum"<<sum<<endl;
//     number++;
    } 
    while (number>=0);
     
    
    cout<<"\nthe sum is"<<sum<<endl;
 return 0;
}