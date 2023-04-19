/*
1768. Merge Strings Alternately
Easy
1.9K
32
Companies
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

*/
#include<string.h>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1,l2;
        l1=word1.length();
        l2=word2.length();
        int l1_count=0,l2_count=0;
        string w1=word1+word2;
        if(l1==l2)
        {
            for(int i=0;i<l1+l2;i++)
            {
                if(i%2==0)
                {
                w1[i]=word1[l1_count];
                l1_count++;
                }
                else
                {
                w1[i]=word2[l2_count];
                l2_count++;
                }
            }
        }
        else if(l1<l2)
        {
            for(int i=0;i<2*l1;i++)
            {
                if(i%2==0)
                {
                w1[i]=word1[l1_count];
                l1_count++;
                }
                else
                {
                w1[i]=word2[l2_count];
                l2_count++;
                }
            }
            for(int i=2*l1;i<l2+l1;i++)
            {
            w1[i]=word2[l2_count];
            l2_count++;
        }
        }
        else
        {
            for(int i=0;i<2*l2;i++)
            {
                if(i%2==0){
                w1[i]=word1[l1_count];
                l1_count++;}
                else{
                w1[i]=word2[l2_count];
                l2_count++;}
            }
            for(int i=2*l2;i<l1+l2;i++){
            w1[i]=word1[l1_count];
            l1_count++;
        }
        }
        return w1;
        
    }
};