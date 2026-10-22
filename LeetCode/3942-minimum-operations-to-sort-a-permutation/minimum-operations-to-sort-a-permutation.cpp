/*
Problem: Minimum Operations to Sort a Permutation (#3942)
LeetCode: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
Language: C++
Runtime: 42 ms
Memory: 165.3 MB
Approach: Optimized Single-Pass Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> start;
        bool inc = true, dec = true;
        for (int i = 0; i < n; i++) {
            if (nums[(i + 1) % n] != (nums[i] + 1) % n)
                inc = false;
            if (nums[(i + 1) % n] != (nums[i] - 1 + n) % n)
                dec = false;
        }
        if (inc)
            start.emplace_back(0, nums[0]);
        if (dec)
            start.emplace_back(1, (n - 1 - nums[0] + n) % n);

        if (start.empty())
            return -1;

        vector<vector<int>> r(2, vector<int>(n, -1));
        queue<pair<int, int>> q;
        for (auto [t, s] : start) {
            r[t][s] = 0;
            q.emplace(t, s);
        }
        while (!q.empty()) {
            auto [t, s] = q.front();
            q.pop();
            if (t == 0 && s == 0)
                return r[t][s];
            int d = r[t][s];

            // Operation 1: Rotate Left by One
            int nt = t, ns = (s + 1) % n;
            if (r[nt][ns] == -1) {
                r[nt][ns] = d + 1;
                q.emplace(nt, ns);
            }
            // Operation 2: Reverse entire array
            nt = 1 - t;
            ns = (n - s) % n;
            if (r[nt][ns] == -1) {
                r[nt][ns] = d + 1;
                q.emplace(nt, ns);
            }
        }
        return -1;
    }
};