class Solution {
public:
    int longestPalindromeSubseq(string s) 
    {
        string r = string(s.rbegin(), s.rend());
        int n = s.size() , m = r.size();
        int dp[n+1][m+1];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
                dp[i][j] = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                if(s[i-1] == r[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};