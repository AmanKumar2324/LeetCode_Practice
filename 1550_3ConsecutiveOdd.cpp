/*
1550. Three Consecutive Odds
Easy
537
53
Companies
Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.
Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.*/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int a=arr.size();
        bool res=false;
        for(int i=0;i<a;i++)
        {
            bool odd=checkOdd(arr[i]);
            if(odd)
            {
                if(i+2<a )
                {
                    if(checkOdd(arr[i+1]) && checkOdd(arr[i+2]))
                    res=true;
                }
               
            }
        }
        return res;
        
    }
    bool checkOdd(int n)
    {
        if(n%2==1)
        return true;
        else
        return false;
    }
};