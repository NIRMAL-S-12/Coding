class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int> ans;
        int j = 0 ;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            int check = 0;
            for(int j = i + 1 ; j < prices.size() ; j++)
            {
                if(prices[i] >= prices[j])
                {
                    check = 1;
                    ans.push_back(prices[i] - prices[j]);
                    break;
                }
            }
            if(check == 0)
                ans.push_back(prices[i]);
        }
        return ans;
        
    }
};