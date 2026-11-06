#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


double Anspow(int x , int n)
{

  long N = n;
  N=-N;

while(N>0)
{
  //  check even odd 
   if(N%2==1)
   {
   int ans = ans * x;

   }

   x = x*x;
   N = N/2;
}
}

int main()
{
  int power;
  cout<<"Enter the power value :";
  cin>>power;

  cout<<endl;

  int base;
  cout<<"ENter the base value:";
  cin>>base;

  cout<<endl;

  double Anspow(base,power);
}