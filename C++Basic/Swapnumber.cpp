#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;
    int c;

     c= b;
     b=a;
     a=c;

     cout<<"the value of a = 5 : "<<a<<endl;
      cout<<"the value of b = 6 : "<<b<<endl;
}