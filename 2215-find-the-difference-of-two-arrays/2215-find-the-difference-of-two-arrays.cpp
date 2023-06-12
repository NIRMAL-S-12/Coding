class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int, int> mp;
        map<int, int> mp2;
        for(auto i : nums2)
        {
            mp2[i]++;
        }
        
        for(auto i : nums1)
        {
            mp[i]++;
        }
        vector<int> d , dd;
        for(auto i : mp)
        {
            if(mp2.find(i.first) != mp2.end());
            else
                d.push_back(i.first);
        }
        for(auto i : mp2)
        {
            if(mp.find(i.first) != mp.end());
            else
                dd.push_back(i.first);
        }
        vector<vector<int>> ans;
        ans.push_back(d);
        ans.push_back(dd);
        return ans;        
    }
};