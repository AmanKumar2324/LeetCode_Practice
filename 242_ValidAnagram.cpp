/*242. Valid Anagram
Easy
9.6K
307
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        else
        {
        map<char,int> sm;
        map<char,int> tm;
        for(int i=0;i<s.size();i++)
        {
            sm[s[i]]++;
            tm[t[i]]++;
        }
        if(sm==tm)
        return true;
        }
        return false;
    }
};