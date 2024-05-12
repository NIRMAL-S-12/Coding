class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int prod = 1;
        for(auto &i : nums)
            prod *= i;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0)
            {
                int p = 1;
                for(int j = 0 ; j < nums.size() ; j++)
                    if(i != j)
                        p *= nums[j];
                ans.push_back(p);
            }
            else
            {
                ans.push_back(prod / nums[i]);
            }
        }
        return ans;
        
    }
};