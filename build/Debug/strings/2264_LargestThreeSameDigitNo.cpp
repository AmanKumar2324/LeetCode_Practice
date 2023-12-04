/* 2264. Largest 3-Same-Digit Number in String
You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.
 

Example 1:

Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
Example 2:

Input: num = "2300019"
Output: "000"
Explanation: "000" is the only good integer.
Example 3:

Input: num = "42352338"
Output: ""
Explanation: No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.
 

Constraints:

3 <= num.length <= 1000
num only consists of digits.*/

class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> res;
        unordered_set<int> seen;
        int maxele = -1;

        // Convert each character to an integer and store in res
        for (auto c : num) {
            int val = c - '0';
            res.push_back(val);
        }

        // Iterate over res to find the maximum distinct good integer
        for (int i = 1; i < res.size() - 1; i++) {
            if (res[i] == res[i - 1] && res[i] == res[i + 1] && seen.find(res[i]) == seen.end()) {
                maxele = max(maxele, res[i]);
                seen.insert(res[i]);
            }
        }

        // If no such element is found, return an empty string
        if (maxele == -1) {
            return "";
        }

        // Convert maxele to a character and create the result string
        string answer(3,maxele+'0');

        return answer;
    }
};