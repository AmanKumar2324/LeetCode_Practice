/*1979. Find Greatest Common Divisor of Array
Easy
867
33
Companies
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minval = *min_element(nums.begin(),nums.end());
        int maxval = *max_element(nums.begin(),nums.end());
        int res=1;
        for(int i=2;i<=minval;i++)
        {
            if(maxval%i==0 && minval%i==0)
            res=i;
        }
        return res;
        
    }
};