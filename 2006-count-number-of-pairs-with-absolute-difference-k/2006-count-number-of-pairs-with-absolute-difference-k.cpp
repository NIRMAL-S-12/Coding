class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int mp[201];
        for(int i = 0 ; i < nums.size() ; i++)
            mp[nums[i]]++;
        int ans = 0;
        for(int i = k + 1 ; i < 201 ; i++)
            ans += mp[i] * mp[i-k];
        return ans;
    }
};