class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        map<string, int> mp;
        for(int i = 0 ; i < paths.size() ; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                mp[paths[i][j]]++;
            }
        }
        for(int i = 0 ; i < paths.size() ; i++)
        {
            if(mp[paths[i][1]] == 1)
                return paths[i][1];
        }
        return "";
    }
};