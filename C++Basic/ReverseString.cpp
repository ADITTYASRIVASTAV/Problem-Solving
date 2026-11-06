/***
 * 
 * Given two strings s1 and s2 as input, concatenate two strings and then reverse the joined string. 

Examples:

Input: s1 = "Geeks" , s2 = "forGeeks"

Output: "skeeGrofskeeG" 

Explanation: Concatenating s1 and s2 to get "GeeksforGeeks" then reversing it to "skeeGrofskeeG".

Input: s1 = "Practice" , s2 = "Geeks"

Output: "skeeGecitcarP"

Explanation: Concatenating s1 and s2 to get "PracticeGeeks" then reversing it to"skeeGecitcarP".
 */

#include <iostream>
#include <string>
#include <algorithm>
 using namespace std;

 int main()
 {
    string s1 ="Geeks";
    string s2 ="forGeeks";

    string s3 = s1+s2;
    cout<<s3;
   cout<<endl;
   cout<<"Reverse the string";

//    string s4="";
//    for(int i=s3.size()-1; i>=0;  i--)
//    {
//        s4+= s3[i];
//    }
cout<<endl;
//    cout<<s4;

  reverse(s3.begin() , s3.end());

  cout<<s3;
 }