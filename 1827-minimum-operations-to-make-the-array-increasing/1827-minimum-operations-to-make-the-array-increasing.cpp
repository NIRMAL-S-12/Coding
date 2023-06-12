class Solution {
public:
    int minOperations(vector<int>& nums)
    {
        int ans = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] >= nums[i+1])
            {
                int k = nums[i] + 1;
                ans += (k - nums[i+1]);
                nums[i+1] = k;
            }
        }
        return ans;
        
    }
};