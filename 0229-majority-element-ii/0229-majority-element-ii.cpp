class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int a = floor(nums.size() / 3);
        vector<int> ans;
        map<int, int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto i : nums)
        {
            if(mp[i] > a)
            {
                ans.push_back(i);
                mp[i] = -110;
            }
        }
        return ans;
        
    }
};