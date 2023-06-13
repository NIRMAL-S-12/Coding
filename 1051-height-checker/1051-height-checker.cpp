class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> a = heights;
        int ans = 0;
        sort(a.begin(), a.end());
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(a[i] != heights[i])
                ans++;
        }
        return ans;
        
    }
};