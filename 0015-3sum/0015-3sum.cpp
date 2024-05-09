class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int j = i + 1 , k = nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                }
                if(sum < 0)
                {
                    j++;
                }
                if(sum > 0)
                {
                    k--;
                }
            }
        }
        
        for(auto i : s)
            ans.push_back(i);
        return ans;
        
    }
};