class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        vector<string>v;
        string word;
        stringstream ss(s);
        while(ss >> word)
            v.push_back(word);
        
        if(pattern.size() != v.size())
            return false;
        map<char, string> mp;
        for(int i = 0 ; i < pattern.size() ; i++)
        {
            char k = pattern[i];
            string va = v[i];
            auto it = mp.find(k);
            if(it != mp.end())
            {
                if(it->second != va)
                    return false;
            }
            else
            {
                mp[k] = va;
            }
        }
        map<string, char> mmp;
        for(int i = 0 ; i < v.size() ; i++)
        {
            char va = pattern[i];
            string k = v[i];
            auto it = mmp.find(k);
            if(it != mmp.end())
            {
                if(it->second != va)
                    return false;
            }
            else
            {
                mmp[k] = va;
            }
        }
        return true;
        
    }
};