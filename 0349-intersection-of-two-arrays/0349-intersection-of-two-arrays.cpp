class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int, int> mp, mp1;
        for(auto i : nums1)
            mp[i]++;
        for(auto i : nums2)
            mp1[i]++;
        set<int> s;
        for(auto &i : mp)
        {
            if(mp1.find(i.first) != mp1.end())
                s.insert(i.first);
        }
        vector<int> ans(s.begin() , s.end());
        return ans;
        
    }
};