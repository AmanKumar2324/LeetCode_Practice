/*You are given an array points where points[i] = [xi, yi] is the coordinates of the ith point on a 2D plane. Multiple points can have the same coordinates.

You are also given an array queries where queries[j] = [xj, yj, rj] describes a circle centered at (xj, yj) with a radius of rj.

For each query queries[j], compute the number of points inside the jth circle. Points on the border of the circle are considered inside.

Return an array answer, where answer[j] is the answer to the jth query.

 

Example 1:


Input: points = [[1,3],[3,3],[5,3],[2,2]], queries = [[2,3,1],[4,3,1],[1,1,2]]
Output: [3,2,2]
Explanation: The points and circles are shown above.
queries[0] is the green circle, queries[1] is the red circle, and queries[2] is the blue circle.*/

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int qn = queries.size();
        int pn = points.size();
        vector<int> res;
        for(int i = 0; i < qn; i++) {
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            
            int counter = 0;
            for(int j = 0; j < pn; j++) {
                vector<int> a = points[j];
                int dx=x-a[0];
                int dy=y-a[1];
                if(dx*dx + dy*dy <=r*r) {
                    counter++;
                }
            }
            res.push_back(counter);
        }
        return res;
    }
};
