class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        if((ransomNote.size() == 1 && magazine.size() == 1 ) && ransomNote[0] != magazine[0])
            return false;
        map<char, int>r;
        map<char,int>m;
        for(auto i : ransomNote)
            r[i]++;
        for(auto i : magazine)
            m[i]++;
        for(auto i : r)
        {
            cout<<i.first<<"  "<<m[i.first]<<"   "<<r[i.first]<<endl;
            if(m[i.first] < r[i.first] )
                return false;
        }
        return true;
        
    }
};