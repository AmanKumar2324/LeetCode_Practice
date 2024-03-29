/*
7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21*/
#include<math.h>
class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        while(x)
        {
            int d=x%10;
            rev=(rev*10)+d;
            x/=10;
        }
        if(rev>=pow(-2,31)&&rev<=(pow(2,31)-1))
        return rev;
        else
        return 0;
    }
        
    
};