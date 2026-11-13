//enter a char tell its digit alphabet or special chr
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>'a'&& ch<'z' || ch>'A' && ch<'Z')
    {cout<<"alphabet";}
    else if(ch<'9' && ch>'0')
    {cout<<"digit";}
    else{cout<<"special chr"}
    return 0;
}