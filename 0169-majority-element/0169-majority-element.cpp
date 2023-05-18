class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans = 0;
        map<int, int>mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        int max = 0;
        for(auto i : mp)
        {
            if(i.second > max)
            {
                max = i.second;
                ans = i.first;
            }
        }
        return ans;
        
    }
};