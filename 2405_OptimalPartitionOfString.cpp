/*2405. Optimal Partition of String
Medium
2.2K
84
Companies
Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

Return the minimum number of substrings in such a partition.

Note that each character should belong to exactly one substring in a partition.

 

Example 1:

Input: s = "abacaba"
Output: 4
Explanation:
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.
Example 2:

Input: s = "ssssss"
Output: 6
Explanation:
The only valid partition is ("s","s","s","s","s","s").
 

Constraints:

1 <= s.length <= 105
s consists of only English lowercase letters.*/

class Solution {
public:
    int partitionString(string s) {
        // map<char,int> m;
        // for(int i=0;i<s.length();i++)
        // {
        //     m[s[i]]++;
        // }
        // int max=0;
        // for(int i=0;i<m.size();i++)
        // {
        //     if(m[i]>max)
        //     {
        //         max=m[i];
        //     }
        // }
        // return max;
        set<int> unique;
        int i=0,countn=0;
        while(i<s.length())
        {
            countn++;
            while(i<s.length() && unique.find(s[i])==unique.end())
            {
                unique.insert(s[i]);
                i++;
            }
            unique.clear();
        }
        return countn;
        
    }
};