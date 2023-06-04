/*633. Sum of Square Numbers
Medium
2.2K
521
Companies
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)
          return false;
        long long l=0, r=sqrt(c);
        while(l<=r)
         {
             long long p=l*l+r*r;
             if(p<c)
               l++;
              else if(p>c)
                 r--;
                else if(p==c)
                  return true;
         }
        return false;
    }
};