/*520. Detect Capital
Easy
3.2K
446
Companies
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false
 

Constraints:

1 <= word.length <= 100
word consists of lowercase and uppercase English letters.*/

class Solution {
public:
    bool detectCapitalUse(string word) {

        string s1=word;
        transform(s1.begin(),s1.end(),s1.begin(),::toupper);
        if(s1==word)
        return true;
        string s2=word;
        transform(s2.begin(),s2.end(),s2.begin(),::tolower);
        if(s2==word)
        return true;
        string s3=word;
        transform(s3.begin()+1,s3.end(),s3.begin()+1,::tolower);
        if(s3==word)
        return true;
        
        return false;       
    }
};