#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int base,exponent;
    cout<<"enter the base and exponent";
    cin>>base>>exponent;
    for(int i=1;i<exponent;i++)
    {
        float result=pow(base,exponent);
        cout <<"the power of "<< base <<" is " <<result;
    }
return 0;
}
