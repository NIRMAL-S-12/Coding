class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
    
    vector<int> dp(nums.size(), 1); // Initialize DP array with 1, as minimum length of LIS is 1
    
    int maxLength = 1; // Minimum length of LIS is 1

    for (int i = 1; i < nums.size(); ++i) 
    {
        for (int j = 0; j < i; ++j) 
        {
            if (nums[i] > nums[j]) 
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;   
    }
};