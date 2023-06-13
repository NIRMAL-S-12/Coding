class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int i = 0 , j = s.size() ;
        vector<int> ans;
        for(int k = 0 ; k < s.size() ; k++)
        {
            if(s[k] == 'I')
            {
                ans.push_back(i);
                i++;
            }
            else
            {
                ans.push_back(j);
                j--;
            }
            if(i == j)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};