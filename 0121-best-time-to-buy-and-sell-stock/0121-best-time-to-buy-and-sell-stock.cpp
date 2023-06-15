class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0;
        int left = 0 , right = 1;
        int max = 0;
        while(right < prices.size())
        {
            if(prices[left] < prices[right])
            {
                max = prices[right] - prices[left];
                if(max > ans)
                    ans = max;
            }
            else
                left = right;
            right++;
        }
        return ans;
        
    }
};