class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int l = -1 ,m = -1;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == target)
            {
                l = i;
                break;
            }
        }
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            if(nums[i] == target)
            {
                m = i;
                break;
            }
        }
        return {l,m};
    }
};