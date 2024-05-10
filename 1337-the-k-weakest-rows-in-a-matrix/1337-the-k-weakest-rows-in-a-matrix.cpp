class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        map<int,int>mp;
        for(int i = 0 ; i < mat.size() ; i++)
        {
            int sum = 0;
            for(int j = 0 ; j < mat[i].size() ; j++)
            {
                if(mat[i][j] == 1)
                    sum++;
            }
            mp[i] = sum;
        }
        
        multimap<int,int>mmp;
        for(auto &i : mp)
        {
            mmp.insert({i.second,i.first});
        }
        vector<int> ans;
        for(auto &i : mmp)
        {
            if(k-- == 0)
                break;
            ans.push_back(i.second);
        }
        return ans;
    }
};