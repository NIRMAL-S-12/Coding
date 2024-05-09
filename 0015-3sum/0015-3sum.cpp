class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int left = i + 1 ;
            int right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0)
                {
                    s.insert({nums[i] , nums[left] , nums[right]});
                    left++;
                    right--;
                }
                if(sum < 0)
                left++;
                if(sum > 0)
                right--;
            }
        }
        for(auto i : s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};