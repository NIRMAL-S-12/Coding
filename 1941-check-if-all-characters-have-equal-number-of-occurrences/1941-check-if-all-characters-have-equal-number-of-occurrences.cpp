class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;

    int count = m[s[0]];
    for(auto e:m)
        if(e.second != count)
            return false;
            
    return true;
        
    }
};