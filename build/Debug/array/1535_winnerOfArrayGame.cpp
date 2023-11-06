/*1535. Find the Winner of an Array Game
Solved
Medium
Topics
Companies
Hint
Given an integer array arr of distinct integers and an integer k.

A game will be played between the first two elements of the array (i.e. arr[0] and arr[1]). In each round of the game, we compare arr[0] with arr[1], the larger integer wins and remains at position 0, and the smaller integer moves to the end of the array. The game ends when an integer wins k consecutive rounds.

Return the integer which will win the game.

It is guaranteed that there will be a winner of the game.*/
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans=arr[0], conse=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                conse=0;
                ans=arr[i];
            }
            conse++;
            if(conse==k)
            return ans;
        }
        return ans;
        
    }
};