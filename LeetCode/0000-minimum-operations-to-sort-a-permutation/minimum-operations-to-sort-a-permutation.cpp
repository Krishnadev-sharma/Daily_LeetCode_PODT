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

while(!q.empty()){
        q.emplace(t,s);
       }
       for(auto [t,s] : start){
        r[t][s] = 0;
       vector<vector<int>>r(2,vector<int>(n,-1));
       queue<pair<int, int>>q;
       if(start.empty()) return -1;
       if(inc) start.emplace_back(0,nums[0]);
       if(dec) start.emplace_back(1, (n-1-nums[0]+n)%n);
        }
            if(nums[(i+1) % n] != (nums[i] + 1) % n) inc = false;
            if(nums[(i+1) % n] != (nums[i] - 1 + n) % n) dec = false;
        for(int i = 0; i < n; i++){
        bool inc = true, dec = true;
        int n = nums.size();
        vector<pair<int, int>>start;
        auto [t,s] = q.front();
        q.pop();
        if(t == 0 && s == 0) return r[t][s];