class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int i = 0 , j = 0;
        string a = "";
        vector<string> ans;
        while(i < nums.size())
        {
            while(j + 1 < nums.size() && nums[j] + 1 == nums[j+1])
                j++;
            if(i == j)
            {
                a = to_string(nums[i]);
            }
            else
            a = to_string(nums[i]) + "->" + to_string(nums[j]);
            ans.push_back(a);
            a = "";
            i = j + 1;
            j++;
        }
        return ans;
    }
};