/*
Problem: Create Grid With Exactly One Path (#3963)
LeetCode: https://leetcode.com/problems/create-grid-with-exactly-one-path/
Language: C++
Runtime: 2 ms
Memory: 11.1 MB
Approach: Optimized Linear State Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>grid(m,string(n,'#'));
        for(int j = 0; j < n; j++){
            grid[0][j] = '.';
        }
        for(int i = 0; i < m; i++){
            grid[i][n-1] = '.';
        }
        return grid;
    }
};