class Solution {
public:
    vector<vector<int>>ans;
    void print(vector<int>&c , int idx, vector<int>&s , int target)
    {
        if(idx == c.size())
        {
            if(target == 0)
            {
                ans.push_back(s);
                return ;    
            }
            return ;
        }
        else
        {
            if(c[idx] <= target)
            {
            s.push_back(c[idx]);
            print(c,idx, s, target - c[idx]);
            s.pop_back();
            }
            print(c,idx+1,s,target);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>subset;
        print(candidates, 0 , subset , target);
        return ans;
        
    }
};