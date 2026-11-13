/*enter number upto 12
 u will get the month name
 number of days in that month*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int year,n;
    cout<<"enter year:";
    cin>>year;
    cout<<"enter n";
    cin>>n;
    if(year%4!=0)
        {if(n<=7 && n%2!=0)
            {cout<<31};
            else if(n=2){cout<<28;}
            else {cout<<30;}}
    else{
        if(n%2!=0){cout<<30;}
        else{cout<<31;}
    }
 } 