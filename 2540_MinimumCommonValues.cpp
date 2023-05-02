/*2540. Minimum Common Value
Easy
335
4
Companies
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.

 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.
Example 2:

Input: nums1 = [1,2,3,6], nums2 = [2,3,4,5]
Output: 2
Explanation: There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.*/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int res = -1;
        int n1=nums1.size();
        int n2= nums2.size();
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            i++;
            else if(nums1[i]==nums2[j])
            {
                res=nums1[i];
                break;
            }
            else
            j++;
        }
        return res;
        
    }
};