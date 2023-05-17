/*215. Kth Largest Element in an Array
Medium
13.8K
684
Companies
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // auto it= unique(nums.begin(),nums.end());
        // nums.erase(it,nums.end());
        int n=nums.size();
        return nums[n-k];
    }
};