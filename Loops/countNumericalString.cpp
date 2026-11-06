#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{


         long long number =0;
     
     for(int i=0; i<=s.size()-1; i++)
     {
         int digit = s[i] - '0';    // convert char to number ;
         
         number = number * 10 + digit;  // we get number 35;
     }
     
     int count=0;
     
     long long  temp = number;
     
     while(temp>0)
     {
         int digit = temp%10;
         
            // check number is non zero
            
            if(digit!=0)
            {
                if(number%digit==0)
                {
                    count++;
                }
            }
            
            temp = temp/10;
     }
     
     return count;
}