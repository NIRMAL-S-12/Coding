class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int finalpos = nums.size() - 1;
        for(int i = nums.size() - 2 ; i >= 0 ; i--)
        {
            if(i + nums[i] >= finalpos)
                finalpos = i;
        }
        return finalpos == 0;
        
    }
};