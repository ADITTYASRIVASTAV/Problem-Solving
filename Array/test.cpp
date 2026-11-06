#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

    /**
     * Input: s = "Let's take LeetCode contest"
       Output: "s'teL ekat edoCteeL tsetnoc"
     */

    
       /***
        * 1. string ko word me convert 
        *     vector<string> word;
        *    
        * loop lagaoo
        * agar space ahi hai to charter  ko wod me push kar do     
        * 
        * 
        * 
        */
       
        string s;
        cout<<"Enter the Sentence: ";
        cin>>s;

        vector<string>Word;
        string letter = "";

        for(int i=0; i<=s.size()-1; i++)
        {
            if(s[i]!=' ')
            {
              letter = letter + s[i];
            }
            else 
            {

                Word.push_back(letter);
                letter = "";
            }

        }

        //  last letter push karna hai 
            Word.push_back(letter);

             string ans = "";
            for(int  i = 0; i <=Word.size()-1;  i++)
            {

                for(int j =Word[i].size()-1; j>=0; j--)
            {
                     ans = ans + Word[i][j];
            }
              
            if(i != Word.size()-1)
            {
                ans = ans +' ';
            }

            }

       cout<<s<<" "<<ans;
return 0;
}