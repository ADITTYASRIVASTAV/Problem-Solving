#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the natural number.."<<endl;
    cin>>num;

    int evenSum=0;
    int oddSum=0;
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            evenSum+=i;
        }

        else
        {
        oddSum+=i;
        }
    }

    cout<<"Enen natural number Sum:"<<endl<<evenSum<<endl;
    cout<<"Odd natural number Sum:"<<endl<<oddSum<<endl;
}