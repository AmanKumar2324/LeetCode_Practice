/*43. Multiply Strings
Medium
6.4K
2.9K
Companies
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
 

Constraints:

1 <= num1.length, num2.length <= 200
num1 and num2 consist of digits only.
Both num1 and num2 do not contain any leading zero, except the number 0 itself.*/

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        vector<int> res(n1 + n2, 0);
        string result;

        for(int i = n1 - 1; i >= 0; --i) {
            for(int j = n2 - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = mul + res[p2];
                res[p2] = sum % 10;
                res[p1] += sum / 10;
            }
        }

        // Skipping over leading zeros
        int i = 0;
        while(i < res.size() && res[i] == 0) 
            ++i;
        
        // Construct the result string
        for(; i < res.size(); ++i)
            result.push_back(res[i] + '0');
            
        return result.empty() ? "0" : result;
    }
};
