class Solution {
public:
    
    void fun(vector<int>&c, int target, int i , int sum, vector<vector<int>>&ans, vector<int>&v)
    {
        if(sum == target)
        {
            ans.push_back(v);
            return;
        }
        if(sum > target)
            return;
        
        for(int j = i ; j < c.size() ; j++)
        {
            if(j > i && c[j] == c[j-1])
                continue;
            v.push_back(c[j]);
            fun(c,target, j + 1, sum + c[j] , ans, v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>>ans;
        vector<int> v;
        fun(candidates, target, 0 , 0, ans, v);
        return ans;
    }
};