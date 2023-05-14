/*414. Third Maximum Number
Easy
2.5K
2.8K
Companies
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

 

Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        auto it=unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int n=nums.size();
        if(n<=2)
        return *max_element(nums.begin(),nums.end());
        else
        return nums[n-3];
        
    }
};