class Solution {
public:
    
    void fun(vector<vector<int>>&ans,  vector<int>v, int sum, int target, vector<int>&c, int i)
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
            fun(ans,v,sum, target-c[j],c,j+1);
            v.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin() ,candidates.end());
        vector<vector<int>>ans;
        vector<int> v;
        int sum = 0;
        fun(ans, v, sum, target, candidates,0);
        return ans;
    }
};