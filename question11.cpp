//greatest between 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if (a>c)
        {cout<<"a is big";}
        else{cout<<"c is big";}
    }
    else if(b>c)
    {cout<<"b is big";}
    else{cout<<"c is big";}
    return 0;
}