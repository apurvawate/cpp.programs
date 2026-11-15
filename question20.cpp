//check the number is armstroong or not
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int num,sum=0,i;
    cout<<"enetr the num=";
    cin>>num;
    vector<int> arr;
    int original=num;

    while(num>0)
    {
        int n=num%10;
        arr.push_back(n);
        num=num/10;
    }
    int p=arr.size();
    for(i=0;i<p-1;i++)
    {
        sum=sum+pow(arr[i],p);
    }
    if(sum==original)
    {cout<<"armstrong";
    }
    else{cout<<"not armstrong";}
    return 0;
}