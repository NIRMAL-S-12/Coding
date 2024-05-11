class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int res = 0;
        for(auto &i : columnTitle)
        {
            for(int j = 0 ; j < 26 ; j++)
            {
                if(alpha[j] == i)
                    
            res = res * 26 + (j + 1);
            }
        }
        return res;
        
    }
};