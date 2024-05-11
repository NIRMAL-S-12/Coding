class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) 
    {
        int row = nums.size();
        int col = nums[0].size();
        vector<int>sumres;
        int ans = 0;
        for(int i = 0 ; i < row ; i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }
        for(int i = 0 ; i < col ; i++)
        {
            int max = 0;
            for(int j = 0 ; j < row ; j++)
            {
                if(max < nums[j][i])
                    max = nums[j][i];
            }
            ans += max;
        }
        return ans;
    }
};