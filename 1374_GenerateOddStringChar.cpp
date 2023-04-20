/*
1374. Generate a String With Characters That Have Odd Counts
Easy
408
1.2K
Companies
Given an integer n, return a string with n characters such that each character in such string occurs an odd number of times.

The returned string must contain only lowercase English letters. If there are multiples valid strings, return any of them.  

 

Example 1:

Input: n = 4
Output: "pppz"
Explanation: "pppz" is a valid string since the character 'p' occurs three times and the character 'z' occurs once. Note that there are many other valid strings such as "ohhh" and "love".
Example 2:

Input: n = 2
Output: "xy"
Explanation: "xy" is a valid string since the characters 'x' and 'y' occur once. Note that there are many other valid strings such as "ag" and "ur".*/

#include<string>
#include<vector>

class Solution {
public:
    string generateTheString(int n) {
        string ans(n,' ');
        char a = 'a';
        char b = 'b';
        char c = 'c';
        if(n==1){
        ans[0]=a;
        return ans;
        }
        else
        {
            if(isEven(n))
            {
                for(int i=0;i<n;i++)
                {
                    if(i==0)
                    ans[i]=a;
                    else
                    ans[i]=b;
                }
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(i==0)
                    ans[i]=a;
                    else if(i==1)
                    ans[i]=b;
                    else
                    ans[i]=c;
                }
            }
        }
        return ans;

        
    }
    bool isEven(int n)
    {
        if(n%2==0)
        return true;
        else
        return false;
    }
};