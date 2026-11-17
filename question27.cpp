//find a generic root of a number
#include<iostream>
#include<vector>
using namespace std;
void change(int n)
{ int i;
    vector<int> arr;
 while(n>0)
    {
        int i=n%10;
        arr.push_back(i);
        n=n/10;
    }
    int p=arr.size();
    int sum=0;
    for(i=0;i<p;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum;
}
int main()
{
    int num,sum=0;
    cin>>num;
    change(num);
   
    if(sum>9)
    {
        sum=num;
        change(num);
    }
    else{
        cout<<"final sum="<<sum;
    }
    return 0;

}
