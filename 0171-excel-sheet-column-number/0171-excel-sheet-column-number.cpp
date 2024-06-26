class Solution {
public:
    int titleToNumber(string str) 
    {
        int res = 0;
        for(auto i : str)
        {
            res = res * 26 + (i - 'A' + 1);
        }
        return res;
        
    }
};