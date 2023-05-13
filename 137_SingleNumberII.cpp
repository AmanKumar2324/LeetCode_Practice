/*137. Single Number II
Medium
5.6K
544
Companies
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n)
        {
            if(i+1<n && nums[i]==nums[i+1])
            i+=3;
            else
            return nums[i];
        }
        return 0;
        
    }
};