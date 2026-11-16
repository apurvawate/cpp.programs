//count the number of digit in a given numbr
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    vector<int> arr;
    while(num>0)
    {
        i=num%10;
        arr.push_back(i);
        num=num/10;
    }
    int p=arr.size();
    cout<<"the number od digits it owns"<<p;
    return 0;

}