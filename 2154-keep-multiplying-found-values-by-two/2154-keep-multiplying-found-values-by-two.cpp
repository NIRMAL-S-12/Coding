class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) 
    {
        sort(nums.begin(),  nums.end());
        for(auto i : nums)
        {
            if(i == o)
                o *= 2;
        }
        return o;
        
    }
};