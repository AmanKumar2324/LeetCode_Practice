/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0*/

class Solution {
public:
    int addDigits(int num) {
        int res=sumDigits(num);
       while(res>=10)
       {
           res=sumDigits(res);
       }
       return res;
    }

    int sumDigits(int n)
    {
        int sum=0;
        while(n)
        {
            int d1=n%10;
            sum+=d1;
            n/=10;
        }
        return sum;
    }
};