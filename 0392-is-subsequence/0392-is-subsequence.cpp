class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int k = 0 , i = 0 , j;
        for(i = 0 ; i < t.size() ; i++)
        {
            if(t[i] == s[k])
            {
                k++;
            }
        }
        if(i == t.size() && k == s.size() )
            return true;
        return false;
        
    }
};