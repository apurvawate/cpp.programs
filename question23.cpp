//reverse a given number again (using a vetor)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    vector<int> arr;
    while(n>0)
    {
        int i=n%10;
        arr.push_back(i);
        n=n/10;
    }
    int p= arr.size();
    for(i=0;i<p-1;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
