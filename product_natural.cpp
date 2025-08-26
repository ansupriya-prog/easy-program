#include<iostream>
using namespace std;
int main()
{
    int a ,product=1;
    cout<<"enter the numbers ";
    for(int i=1;i<10;i++)
    {
        cin>>a;
        product *= a;
    }
    cout<<"the product of 10 natural number "<<product;
return 0;
}
