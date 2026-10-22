/*
Problem: Minimum Operations To Sort A Permutation (#?)
LeetCode: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
Language: C++
Runtime: N/A
Memory: N/A
Approach: Optimized Single-Pass Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

return -1;
        if (start.empty())

            start.emplace_back(1, (n - 1 - nums[0] + n) % n);
        if (dec)
            start.emplace_back(0, nums[0]);
        if (inc)
        }
                dec = false;
            if (nums[(i + 1) % n] != (nums[i] - 1 + n) % n)
                inc = false;
            if (nums[(i + 1) % n] != (nums[i] + 1) % n)
        for (int i = 0; i < n; i++) {
        bool inc = true, dec = true;
        vector<pair<int, int>> start;
        int n = nums.size();
    int minOperations(vector<int>& nums) {
public:
class Solution {