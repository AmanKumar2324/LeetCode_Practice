/*2114. Maximum Number of Words Found in Sentences
Easy
1.4K
44
Companies
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.

 

Example 1:

Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
Output: 6
Explanation: 
- The first sentence, "alice and bob love leetcode", has 5 words in total.
- The second sentence, "i think so too", has 4 words in total.
- The third sentence, "this is great thanks very much", has 6 words in total.
Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max=0;
        // int count =0;
        for(int i=0;i<n;i++)
        {
            int count =0;
            string st = sentences[i];
            for(int j=0;j<st.size();j++)
            {
                if(st[j] ==' ')
                count++;
            }
            if(count+1>max)
            max=count+1;
        }
        return max;
        
        
    }
};