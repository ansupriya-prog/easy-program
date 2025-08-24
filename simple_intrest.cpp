#include<iostream>
using namespace std;
int main()
{
    float p;
    int r,t,si;
    cout<<"amount :";
    cout<<"\n";
    cin >> p;
    cout<<"rate in %  :";
    cin>>r;
    cout<<"time in year :";
    cin>> t;
    si=(p*r*t)/100;
    cout<<"the  simple interest is "<<si;
    return 0;
}
