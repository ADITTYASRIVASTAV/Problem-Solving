/***
 * Given a string s, the task is to change the complete string to uppercase or lowercase depending on the case of the first character.

Examples:

Input: s = "abCD"
Output: "abcd"

Explanation: The first letter (a) is lowercase. Hence, the complete string is made lowercase.

Input: s = "Abcd"
Output: "ABCD"

Explanation: The first letter (A) is uppercase. Hence, the complete string is made uppercase.
 */


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

    string s1;
    cout<<"Enter the String\n";
    cin>>s1;

    cout<<endl;
    string s2="";
     if(islower(s1[0]))
     {
       for(int i=0; i<=s1.size()-1; i++)
       {
        s2+=tolower(s1[i]);
       }
     }
     else
     {

      for(int i=0; i<=s1.size()-1; i++)
       {
        s2+=toupper(s1[i]);
       }
     }
    cout<<s2;
}