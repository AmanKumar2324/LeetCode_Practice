/*704. Binary Search
Solved
Easy
Topics
Companies
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1)
        {
            if(target==nums[0])
            return 0;
            else
            return -1;
        }
        int high=n;
        int low=0;
        int res=-1;
        while(high>=low)
        {
            int mid=low+(high-low)/2;
            if(target>nums[mid])
            {
                low=mid+1;
            }
            if(target<nums[mid])
            {
                high=mid-1;
            }
            if(target==nums[mid])
            {
                res=mid;

                break;
            }
        }
        return res;
        
    }
};