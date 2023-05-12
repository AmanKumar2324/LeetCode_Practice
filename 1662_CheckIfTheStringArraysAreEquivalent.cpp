/*1662. Check If Two String Arrays are Equivalent
Easy
2.1K
173
Companies
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

 

Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1="";
        string res2="";
        int w1 = word1.size();
        int w2 = word2.size();
        for(int i=0;i<w1;i++)
        {
            // res1.push_back(word1[i]);
            res1=res1+word1[i];
        }
        for(int i=0;i<w2;i++)
        {
            // res2.push_back(word2[i]);
            res2=res2+word2[i];

        }
        if(res1==res2)
        return true;
        else
        return false;

        
    }
};