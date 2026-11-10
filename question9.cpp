//voting eligibilty criteria
#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>"enter your age">>age;
    if(age>18)
    {cout<<"go vote";}
    else{
       cout<<"go home";
    }
    return 0;
}