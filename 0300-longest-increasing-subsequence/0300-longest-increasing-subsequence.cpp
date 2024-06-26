class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        set<int>s(nums.begin(), nums.end());
        vector<int>v(s.begin(), s.end());
        int m = v.size();
        int n = nums.size();
        int dp[n+1][m+1];
        for(int i = 0 ; i <= n ; i++)
        {
            for(int j = 0 ; j <= m ; j++)
            {
                dp[i][j] = 0;
            }
        }
        
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                if(nums[i - 1] == v[j - 1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};