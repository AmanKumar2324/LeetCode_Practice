/*1759. Count Number of Homogenous Substrings
Solved
Medium
Topics
Companies
Hint
Given a string s, return the number of homogenous substrings of s. Since the answer may be too large, return it modulo 109 + 7.

A string is homogenous if all the characters of the string are the same.

A substring is a contiguous sequence of characters within a string.*/

class Solution {
public:
    int countHomogenous(string s) {
        const int mod=1000000007;
        int ans=s.length();
        int c=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
            ans=(ans+c)%mod;
            c++;
            }
            else
            c=1;
        }
        return ans;
        
    }
};