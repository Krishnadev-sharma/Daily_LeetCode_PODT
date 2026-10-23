/*
Problem: Maximum K to Sort a Permutation (#3644)
LeetCode: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
Language: C++
Runtime: 0 ms
Memory: 152.6 MB
Approach: Optimized Linear State Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                if (k == -1) {
                    k = nums[i];
                } else {
                    k = k & nums[i];
                }
            }
        }
        return (k == -1) ? 0 : k;
    }
};