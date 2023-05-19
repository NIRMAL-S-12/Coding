class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        map<int, int>m1,m2,m3;
        set<int>s;
        for(int i = 0 ; i < nums1.size(); i++)
        {
            m1[nums1[i]]++;
            s.insert(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size(); i++)
        {
            m2[nums2[i]]++;
            s.insert(nums2[i]);
        }
        for(int i = 0 ; i < nums3.size(); i++)
        {
            m3[nums3[i]]++;
            s.insert(nums3[i]);
        }
        vector<int> ans;
        set<int>l;
        for(auto i : s)
        {
            int a = i;
            if(m1[a] != 0 && m2[a] != 0)
                l.insert(a);
            else if(m2[a] != 0 && m3[a] != 0)
                l.insert(a);
            else if(m3[a] != 0 && m1[a] != 0)
                l.insert(a);
        }
        for(auto i : l)
        {
            ans.push_back(i);
        }
        return ans;
        
        
        
    }
};