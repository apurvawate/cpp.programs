//reverse a guven number 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num,n,i,p;
    cout<<"enter a number";
    cin>>num;
    vector<int> arr;

    while(num>0)
    {
        n=num%10;
        arr.push_back(n);
        num=num/10;
    }
    p=arr.size();
    for(i=0;i<p-1;i++)
    {
        cout<<arr[i];
    }
    return 0;

}

