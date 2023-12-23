/*1496. Path Crossing
Solved
Easy
Topics
Companies
Hint
Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.

Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.

 

Example 1:


Input: path = "NES"
Output: false 
Explanation: Notice that the path doesn't cross any point more than once.
Example 2:


Input: path = "NESWW"
Output: true
Explanation: Notice that the path visits the origin twice.
 

Constraints:

1 <= path.length <= 104
path[i] is either 'N', 'S', 'E', or 'W'.
*/

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string,int> m;
        int x=0;
            int y=0;
        m["0,0"]=1;
        string coor="";
        for(int i=0;i<path.length();i++)
        {
            
            if(path[i]=='N')
            y++;
            else if(path[i]=='S')
            y--;
            else if(path[i]=='E')
            x++;
            else if(path[i]=='W')
            x--;
            coor = to_string(x)+','+to_string(y);

            if(m.find(coor)!=m.end())
            return true;
            m[coor]=1;

        }
        return false;
        
    }
};