class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        vector<int>ans(2);
        map<int, int>mp;
        int max = 0;
        int row = grid.size() , col = grid[0].size();
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                mp[grid[i][j]]++;
                if(max < grid[i][j])
                    max = grid[i][j];
            }
        }
        
        for(int i = 1 ; i <= max ; i++)
        {
            if(mp[i] == 2)
                ans[0] = i;
            else if(mp[i] == 0)
                ans[1] = i;
        }
        if(ans[1] == 0)
            ans[1] = max + 1;
        return ans;
    }
};