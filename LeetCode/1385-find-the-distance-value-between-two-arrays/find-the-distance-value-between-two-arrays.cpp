/*
Problem: Find the Distance Value Between Two Arrays (#1385)
LeetCode: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
Language: C++
Runtime: 0 ms
Memory: 16.7 MB
Approach: Optimized Linear State Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool isFar = true;
            for (int j = 0; j < arr2.size(); j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    isFar = false;
                    break;
                }
            }
            if (isFar) {
                count++;
            }
        }

        return count;
    }
};