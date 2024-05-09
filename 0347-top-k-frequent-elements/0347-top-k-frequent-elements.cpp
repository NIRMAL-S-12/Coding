class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> ans;
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++)
            mp[nums[i]]++;
        multimap<int,int>mmp;
        for(auto &i : mp)
            mmp.insert({i.second,i.first});
        
        for(auto it = mmp.rbegin() ; it != mmp.rend() ; it++)
        {
            ans.push_back(it->second);
            if(--k == 0)
                break;
        }
        return ans;
    }
};