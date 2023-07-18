class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        map<int, int> mp;
        for(auto i : nums)
        mp[i]++;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int a = target - nums[i];
            if(mp[a])
            {
                for(int j = i ; j < nums.size() ; j++)
                {
                    if(a == nums[j] && i != j)
                    {
                        return {i , j};
                    }
                }
            }
        }
        return {-1};
        
    }
};