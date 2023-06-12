class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i = 0 ; i < nums.size()  ; i++)
        {
            map<int, int> pr, su;
            for(int j = 0 ; j <= i ; j++)
            {
                pr[nums[j]]++;
            }
            for(int k = i + 1 ; k < nums.size() ; k++)
            {
                su[nums[k]]++;
            }
            ans.push_back(pr.size() - su.size());
        }
        //ans.push_back(nums[nums.size()-1]);
        return ans;
        
    }
};