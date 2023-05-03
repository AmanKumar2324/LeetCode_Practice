/*2215. Find the Difference of Two Arrays
Easy
1.4K
56
Companies
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.

 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]
Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
Example 2:

Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
Output: [[3],[]]
Explanation:
For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].*/

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end()); 
        vector<int> res1= distinctElement( nums1,  nums2);
        vector<int> res2 = distinctElement( nums2,  nums1);
        vector<vector<int>> result = {res1,res2};
        return result;
        
    }
    vector<int> distinctElement(vector<int> arr1, vector<int> arr2)
    {
        // sort(arr1.begin(),arr1.end());
        // sort(arr2.begin(),arr2.end());
        int n1=arr1.size();
        int n2=arr2.size();
        vector<int> res;
        int j=0;
        for(int i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(arr1[i]==arr2[j]){
                   break;
                }

            }
            if(j==n2) res.push_back(arr1[i]);
        }
    
        return res;
    }
    
};