/*
2520. Count the Digits That Divide a Number

Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.

 

Example 1:

Input: num = 7
Output: 1
Explanation: 7 divides itself, hence the answer is 1.
Example 2:

Input: num = 121
Output: 2
Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
Example 3:

Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.*/

class Solution {
public:
    int countDigits(int num) {
        int n =num;
        int res=0;
        if(num<10)
        res=1;
        else
        {
            while(num)
            {
                int d1=num%10;
                if(n%d1==0)
                res++;
                num/=10;
            }
        }
        return res;
    }
};