/*1446. Consecutive Characters
Solved
Easy
Topics
Companies
Hint
The power of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string s, return the power of s.

 

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.
Example 2:*/

class Solution {
public:
    int maxPower(string s) {
        int maxPower = 1;
        int currentPower = 1;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currentPower++;
            } else {
                currentPower = 1;  // Reset currentPower for a new character
            }
            maxPower = max(maxPower, currentPower);
        }
        
        return maxPower;
    }
};
