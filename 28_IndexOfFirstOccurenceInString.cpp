/*28. Find the Index of the First Occurrence in a String
Easy
3.3K
165
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay=haystack.length();
        int need = needle.length();
        int index=0;
        for(int i=0;i<hay;i++)
        {
            if(haystack[i]==needle[index])
            {
                index++;  
            }
            else
            {
                i=i-index;
                index=0;
            }
            if(index==need)
            {
                return i-need+1;

            }
        }
        return -1;
        
    }
};