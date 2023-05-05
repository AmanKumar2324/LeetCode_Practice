/*1456. Maximum Number of Vowels in a Substring of Given Length
Medium
1.8K
64
Companies
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.*/

// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         vector<int> nv;
//         int count;
//         vector<string> sub = substring(s,k);
//         int n = sub.size();
//         int i=0;
//         string ss;
//         while(n)
//         {
//             ss=sub[i];
//             count = numVowels(ss);
//             nv.push_back(count);
//             i++;
//             n--;
//         }
//         return *max_element(nv.begin(),nv.end());
        
//     }
//     vector<string> substring(string s, int n)
//     {
//         int length = s.length();
//         int num = length/n;
//         vector<string> sub;
//         for(int i=0;i<length;i++)
//         {
//             sub.push_back(s.substr(i,n));
//         }
//         return sub;
//     }
//     int numVowels(string s)
//     {
//         char ch;
//         int c=0; 
//         for(int i=0;i<s.length();i++)
//         {
//             ch=s.at(i);
//             if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
//             c++;
//         }
//         return c;
//     }
// };

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }
        maxCount = count;
        for (int i = k; i < n; i++) {
            if (isVowel(s[i])) {
                count++;
            }
            if (isVowel(s[i - k])) {
                count--;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};
