class Solution {
public:
    bool judgeCircle(string moves)
    {
        int s = 0;
        int l = 0;
        for(char ch : moves)
        {
            if(ch == 'U')
                s++;
            else if(ch == 'D')
                s--;
            else if(ch == 'L')
                l--;
            else if(ch == 'R')
                l++;
        }
        return s == 0 && l == 0;
        
    }
};