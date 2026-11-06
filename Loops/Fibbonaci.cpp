#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }

    int index0 =0;
    int index1 = 1;
    int ans =0;

    for(int i=0; i<=n; i++)
    {
        ans = index0 + index1;
        index0 = index1;
        index1 = ans;
    }
}