/*2544. Alternating Digit Sum
Easy
234
12
Companies
You are given a positive integer n. Each digit of n has a sign according to the following rules:

The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign.

 

Example 1:

Input: n = 521
Output: 4
Explanation: (+5) + (-2) + (+1) = 4.
Example 2:

Input: n = 111
Output: 1
Explanation: (+1) + (-1) + (+1) = 1.*/

class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,d1;
        int m=n;
        int i=1;
        int digits=0;
        while(n)
        {
            int d=n%10;
            digits++;
            n/=10;
        }
        if(digits==1)
        sum=m;
        else if(digits%2==0)
        {
            while(m)
            {
                d1=m%10;
                if(i%2==1)
                sum=sum+(-1*d1);
                else
                sum=sum+d1;
                m/=10;
                i++;
            }
        }
        else
        {
            while(m)
            {
                d1=m%10;
                if(i%2==1)
                sum=sum+(d1);
                else
                sum=sum+(-1*d1);
                m/=10;
                i++;
            }
        }
        return sum;
       
    }
   
};