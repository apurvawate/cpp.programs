//check wether the rianlgle is equivalent scalne or isoceles
#include<iostream>
using namespace std;
int main()
{int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180)
    {
    if(a==b==c)
    {cout<<"equivalant";}
    else if(a==b || b==c || c==a)
    {cout<<"isoceles";}
    else{cout<<"scalene";}
    }
    else{
        cout<<"not a traingle";
    }
return 0;
}