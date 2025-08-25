#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the 1st  element :";
    cin>>a;
    cout<<"enter the 2nd element :";
    cin>>b;
    cout<<"element before swaping"<<a <<b;
    cout<<"\n";
    temp=a;
    a=b;
    b=temp;
    cout<<"element after swaping"<<a<<b;

}
