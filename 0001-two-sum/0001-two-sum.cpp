class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int a = target - nums[i];
            if(mp[a])
            {
                for(int j = 0 ; j < nums.size() ; j++)
                {
                    if(nums[j] == a && i != j)
                    {
                        return {i,j};
                    }
                }
            }
        }
        return {0};
        
    }
};