/*1207. Unique Number of Occurrences
Easy
3.8K
88
Companies
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> res;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int c=0,i=0;
        while(i<n-1)
        {
            if(arr[i]==arr[i+1])
            {
            c++;
            }
            else
            {
                res.push_back(c);
                c=0;
            }
            i++;
        }
        res.push_back(c);
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++)
        {
            cout<<res[i]<<"  ";
            if(res[i]==res[i+1])
            return false;
        }
        return true;   
    }
};