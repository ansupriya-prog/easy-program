#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    if(n%5==0 && n%11==0)
    {
        cout<<n   <<"   is divisiable by 5 & 11";
    }
    else
    {
        cout<<"the number is not divisiable by 5 & 11";
    }
return 0;
}
