class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int sum = 0;
        vector<int> ams;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i];
            ams.push_back(sum);
            
        }
        return ams;
    }
};