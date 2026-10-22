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

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> start;
        bool inc = true, dec = true;
        for (int i = 0; i < n; i++) {
            if (nums[(i + 1) % n] != (nums[i] + 1) % n)
                inc = false;
            if (nums[(i + 1) % n] != (nums[i] - 1 + n) % n)
                dec = false;
        }
        if (inc)
            start.emplace_back(0, nums[0]);
        if (dec)
            start.emplace_back(1, (n - 1 - nums[0] + n) % n);

        if (start.empty())
            return -1;