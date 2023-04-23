/*2605. Form Smallest Number From Two Digit Arrays
Easy
166
8
Companies
Given two arrays of unique digits nums1 and nums2, return the smallest number that contains at least one digit from each array.
 

Example 1:

Input: nums1 = [4,1,3], nums2 = [5,7]
Output: 15
Explanation: The number 15 contains the digit 1 from nums1 and the digit 5 from nums2. It can be proven that 15 is the smallest number we can have.
Example 2:

Input: nums1 = [3,5,2,6], nums2 = [3,1,7]
Output: 3
Explanation: The number 3 contains the digit 3 which exists in both arrays.*/

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int min1 = INT_MAX;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i = 0, j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                min1 = nums1[i];
                break;
            }
            else if(nums1[i]>nums2[j])j++;
            else i++;
        }
        
        int min2 = nums1[0];
        min2 = (min2*10)+nums2[0];
        
        int min3 = nums2[0];
        min3 = (min3*10)+nums1[0];
        
        return min(min1,min(min2,min3));
    }
};