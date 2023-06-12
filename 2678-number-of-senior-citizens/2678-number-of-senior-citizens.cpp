class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int ans = 0;
        for(auto &i : details)
        {
            int a = (i[11] - '0' ) * 10 + (i[12] - '0');
            if(a > 60)
                ans++;
        }
        return ans;
        
    }
};