/*1351. Count Negative Numbers in a Sorted Matrix
Easy
4.1K
110
Companies
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

 

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n =grid.size();
        int m=grid[0].size();
        vector<int> last = grid[n-1];
        int count =0;
        for(int i=last.size()-1;i>=0;i--)
        {
            if(last[i]<0)
            count++;
            else 
            break;
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=m-1;j>m-count-1;j--)
            {
                if(grid[i][j]<0)
                res++;
            }
        }
        return res;
    }
};