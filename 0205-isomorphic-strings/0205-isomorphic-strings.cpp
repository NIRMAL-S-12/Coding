class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char, int>ss;
        map<char, int>tt;
        if(s.size() != t.size())
            return false;
        for(int i = 0 ; i < s.size() ; i++)
        {
            char k = s[i];
            char v = t[i];
            auto it = ss.find(k);
            if(it != ss.end())
            {
                if(it->second != v)
                    return false;
            }
            else
            {
                ss[k] = v;
            }
        }        
        for(int i = 0 ; i < t.size() ; i++)
        {
            char k = t[i];
            char v = s[i];
            auto it = tt.find(k);
            if(it != tt.end())
            {
                if(it->second != v)
                    return false;
            }
            else
            {
                tt[k] = v;
            }
        }
        return true;
    }
};