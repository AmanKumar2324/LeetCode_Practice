/*LeetCode Logo
Problem List
Premium
0

avatar
No companies found for this problem
34. Find First and Last Position of Element in Sorted Array
Medium
17.8K
434
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
Accepted
1.6M
Submissions
3.8M
Acceptance Rate
42.3%
Seen this question in a real interview before?
1/4
Yes
No
Discussion (74)
Similar Questions
Related Topics
Copyright ©️ 2023 LeetCode All rights reserved

C++

Auto






56789101112131415161234
        return {res[0],res[0]};
        if(res.size()>1)
        return {res[0],res[res.size()-1]};
        return{-1,-1};
    }
};

Console

Find First and Last Position of Element in Sorted Array - LeetCode
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            res.push_back(i);
        }
        if(res.size()==1)
        return {res[0],res[0]};
        if(res.size()>1)
        return {res[0],res[res.size()-1]};
        return{-1,-1};
    }
};