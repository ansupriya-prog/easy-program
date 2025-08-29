#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the mark of the student :";
    cin>>a;
    if(a>90)
    {
        cout<<"A+ GRADE";
    }
    else if(a>80)
    {

        cout<<"A GRADE";

    }
     else if(a>70)
    {

        cout<<"B+ GRADE";

    }
     else if(a>60)
    {

        cout<<" B GRADE";

    }
    else
    {

        cout<<"failed";

    }

return 0;

}
