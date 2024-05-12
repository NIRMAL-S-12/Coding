class Solution {
public:
    string reverseWords(string s) 
    {
        if(s.size() == 0)
            return "";
        int i = 0;
        while(i < s.size() && s[i] == ' ')
            i++;
        if(i == s.size())
            return "";
        int j = i;
        while(j < s.size() && s[j] != ' ')
            j++;
        
        string word = s.substr(i , j - i);
        
        string res = reverseWords(s.substr(j));
        
        if(res == "")
            return word;
        return res + " " + word;
        
    }
};