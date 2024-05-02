class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int maxi = *max_element(nums.begin(), nums.end());
        int freq[10001] = {0};
        for(int i = 0 ; i < nums.size() ; i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]] == 2)
                ans.push_back(nums[i]);
        }
        for(int i = 1 ; i <= maxi + 1 ; i++)
        {
            if(freq[i] == 0)
            {
                ans.push_back(i);
                break;
            }
        }
        return ans;
        
        return ans;
    }
};