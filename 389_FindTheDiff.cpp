/*389. Find the Difference
Easy
3.8K
424
Companies
You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.

 

Example 1:

Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.
Example 2:

Input: s = "", t = "y"
Output: "y"*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        s=s+'0';
        sort(t.begin(),t.end());
        for(int i=0;i<t.length();i++)
        {
            if(s[i]!=t[i]){
                char ch=t[i];
                return ch;
            }
            // return s[t];
        }
        return '0';
        
    }
};