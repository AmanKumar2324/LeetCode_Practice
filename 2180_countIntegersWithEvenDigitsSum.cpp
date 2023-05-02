/*
2180. Count Integers With Even Digit Sum
Easy
480
21
Companies
Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.

 

Example 1:

Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    
Example 2:

Input: num = 30
Output: 14
Explanation:
The 14 integers less than or equal to 30 whose digit sums are even are
2, 4, 6, 8, 11, 13, 15, 17, 19, 20, 22, 24, 26, and 28.*/

class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i=1;i<=num;i++)
        {
            int dsum=digitsSum(i);
            if(dsum%2==0)
            c++;
        }
        return c;
        
    }
    int digitsSum(int n)
    {
        int sum=0;
        while(n)
        {
            int d=n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }
};