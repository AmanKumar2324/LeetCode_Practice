/*448. Find All Numbers Disappeared in an Array
Solved
Easy
Topics
Companies
Hint
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
     for(int i=0;i<n;i++)
     {
          m[nums[i]] = 1;
     }
     vector<int> res;
     for(int i=1;i<=n;i++)
     {
         if(m.find(i)==m.end())
         res.push_back(i);

     }
     return res;
    }
};