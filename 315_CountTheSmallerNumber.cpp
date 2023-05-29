/*315. Count of Smaller Numbers After Self
Hard
8.1K
220
Companies
Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].

 

Example 1:

Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.
Example 2:

Input: nums = [-1]
Output: [0]
Example 3:

Input: nums = [-1,-1]
Output: [0,0]*/

#include <vector>
using namespace std;

class Solution {
public:
    void mergeSort(vector<pair<int, int>>& arr, vector<int>& res, int start, int end) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;
        mergeSort(arr, res, start, mid);
        mergeSort(arr, res, mid + 1, end);

        int i = start, j = mid + 1, k = 0, count = 0;
        vector<pair<int, int>> temp(end - start + 1);

        while (i <= mid && j <= end) {
            if (arr[i].first > arr[j].first) {
                count++;
                temp[k++] = arr[j++];
            } else {
                res[arr[i].second] += count;
                temp[k++] = arr[i++];
            }
        }

        while (i <= mid) {
            res[arr[i].second] += count;
            temp[k++] = arr[i++];
        }

        while (j <= end) {
            temp[k++] = arr[j++];
        }

        for (i = start, k = 0; i <= end; i++, k++) {
            arr[i] = temp[k];
        }
    }

    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        vector<pair<int, int>> arr(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            arr[i] = make_pair(nums[i], i);
        }

        mergeSort(arr, res, 0, nums.size() - 1);
        return res;
    }
};
