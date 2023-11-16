/*1980. Find Unique Binary String
Solved
Medium
Topics
Companies
Hint
Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.

 

Example 1:

Input: nums = ["01","10"]
Output: "11"
Explanation: "11" does not appear in nums. "00" would also be correct. */

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            char de=nums[i][i];
            char fe=de=='0'?'1':'0';
            ans+=fe;
        }
        return ans;
        
    }
};