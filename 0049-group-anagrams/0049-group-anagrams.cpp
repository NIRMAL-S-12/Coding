class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
//         vector<vector<string>> ans;
//         map<string, vector<string>> mp;
//         for(int i = 0 ; i < strs.size() ; i++)
//         {
//             string s = strs[i];
//             sort(s.begin(), s.end());
//             auto it = mp.find(s);
//             if(it != mp.end())
//             {
//                 mp[s].push_back(strs[i]);
//             }
//             else
//             {
//                 mp[s].push_back(strs[i]);
//             }
//         }
//         for(auto &i : mp)
//         {
//             ans.push_back(i.second);
//         }
//         return ans;
        
        
        map<string, vector<string>>mp;
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            auto it = mp.find(s);
            if(it != mp.end())
            {
                mp[s].push_back(strs[i]);
            }
            else
            {
                mp[s].push_back(strs[i]);
            }
        }
        vector<vector<string>>ans;
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
};