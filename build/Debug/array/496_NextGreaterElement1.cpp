/*496. Next Greater Element I
Solved
Easy
Topics
Companies
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> res(n,-1);
        
        for(int i=0;i<nums1.size();i++)
        {
            int eleindex=-1;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    eleindex=j;
                }
                if(eleindex!=-1)
                {
                    if(nums2[j]>nums2[eleindex])
                    {
                    res[i]=(nums2[j]);
                    break;
                }
                }
            }
            
        }
        return res;
        
    }
};