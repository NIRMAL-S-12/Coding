class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        vector<int> a;
        for(auto &i : mp)
        {
            while(i.second > 2)
                i.second -= 1;
            for(int j = 0 ; j < i.second ; j++)
            {
                a.push_back(i.first);
            }
        }
        nums = a;
        return a.size();
    }
};