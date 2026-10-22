/*
Problem: Minimum Operations To Sort A String (#?)
LeetCode: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
Language: C++
Runtime: N/A
Memory: N/A
Approach: Optimized Linear State Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/Daily_LeetCode_PODT
*/

if(is_sorted(s.begin(),s.end())) return 0;
        int n = s.size();
        if(n == 2) return -1;
        
        char min = *min_element(s.begin(), s.end());
        char max = *max_element(s.begin(), s.end());

        if(s[0] == min || s[n-1] == max){
            return 1;
        }
        if(s[0] == max && s[n-1] == min){
            return 3;
        }
        return 2;
    }
};