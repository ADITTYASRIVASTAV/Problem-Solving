#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value of x:"<<endl;
    cin>>x;

    int sum=0;
    for(int i=1; i<=x; i++)
    {
       sum+= i*i*i;

         
    }
    cout<<sum;
}