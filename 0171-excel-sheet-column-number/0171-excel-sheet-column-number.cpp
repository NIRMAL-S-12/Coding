class Solution {
public:
    int titleToNumber(string str) 
    {
        int res = 0 , d;
        for(int i = 0 ; i < str.size() ; i++)
        {
            d = str[i] - 'A' + 1;
            res = res * 26 + d;
        }
        return res;
        
    }
};