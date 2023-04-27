/*504. Base 7
Easy
670
209
Companies
Given an integer num, return a string of its base 7 representation.

 

Example 1:

Input: num = 100
Output: "202"
Example 2:

Input: num = -7
Output: "-10"*/

class Solution {
public:
    string convertToBase7(int num) {
        int i=0;
        int res=0;
        while(num)
        {
            int d=num%7;
            res=(d*pow(10,i))+res;
            num/=7;
            i++;
        }
        return to_string(res);
        
    }
};