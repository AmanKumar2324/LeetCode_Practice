/*896. Monotonic Array
Easy
2.1K
63
Companies
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 

Example 1:

Input: nums = [1,2,2,3]
Output: true
Example 2:

Input: nums = [6,5,4,4]
Output: true
Example 3:

Input: nums = [1,3,2]
Output: false*/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n =nums.size();
        bool result = false;
        if(n==1)
        return true;
        for(int i=0;i<n-1;i++)
        {
            if(nums[0]<=nums[nums.size()-1]){
                if(nums[i]<=nums[i+1])
                result=true;
                else{
                result=false;
                break;}
            }
            else if(nums[0]>=nums[nums.size()-1])
            {
                if(nums[i]>=nums[i+1])
                result =true ;
                else{
                result= false;
                break;}
            }
            else
            result=false;
        }
        return result;

        
    }
};