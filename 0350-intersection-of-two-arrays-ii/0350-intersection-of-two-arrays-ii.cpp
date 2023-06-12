class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int, int> mp, mp2;
        for(auto &i : nums1)
            mp[i]++;
        for(auto &i : nums2)
            mp2[i]++;
        vector<int> ans;
        for(auto i : mp)
        {
            int m = min(i.second, mp2[i.first]);
            for(int j = 0 ; j < m ; j++)
                ans.push_back(i.first);
        }
        return ans;
    }
};