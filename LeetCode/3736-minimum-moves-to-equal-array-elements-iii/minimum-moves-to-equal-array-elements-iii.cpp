/*
Problem: Minimum Moves to Equal Array Elements III (#3736)
LeetCode: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
Language: C++
Runtime: 0 ms
Memory: 31.4 MB
Approach: Optimized Linear State Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int mx = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] > mx)
            mx = nums[i];
        }
        for(int i = 0; i < n; i++){
            count += (mx - nums[i]);
        }
        return count;
    }
};