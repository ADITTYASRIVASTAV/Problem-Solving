/***
 * Read a value and store it in the appropriate Java Data Type. 


Example 1:

Input: 
18 
abc 
9.9876 


Output:
18 
abc 
9.9876 


Explanation:
The three inputs are stored in approriate 
data types and then printed in order.
 */


#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter the number";
    cin>>x;
    cout<<endl;
     string str;
    cout<<"Enter the string";
    cin>>str;
    cout<<endl;
     double num;
     cout<<"Enter the double value";
     cin>> num;
     cout<<endl;

     cout<<"Pint the value";
     cout<<endl;

     cout<<x<<endl<<str<<endl<<num;
}