#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int  print1ton(int x)
{
    if(x==0)
    {
        return 0;;
    }

     print1ton(x-1);

     cout<<x<<" ";
}

int main()
{

     int n;
     cout<<"Enter the value of N :";
     cin>>n;
     cout<<endl;
    if(n>0)
    {
      print1ton(n);
    }
}