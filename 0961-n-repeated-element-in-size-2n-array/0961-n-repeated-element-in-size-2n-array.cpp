class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        map<int, int> mp;
        for(auto &i : nums)
        {
            mp[i]++;
        }
        int ans = 0 , maxi = 0, ma = 0;
        for(auto &i : mp)
        {
            if(i.second >= maxi)
            {
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
        
    }
};