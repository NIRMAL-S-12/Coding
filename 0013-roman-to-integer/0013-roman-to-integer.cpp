class Solution {
public:
    
    int fun(char ch)
    {
        if(ch == 'I')
            return 1;
        if(ch == 'V')
            return 5;
        if(ch == 'X')
            return 10;
        if(ch == 'L')
            return 50;
        if(ch == 'C')
            return 100;
        if(ch == 'D')
            return 500;
        if(ch == 'M')
            return 1000;
        return -1;
    }
    int romanToInt(string s) 
    {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if( fun(s[i+1]) > fun(s[i]))
            {
                ans += (fun(s[i+1]) - fun(s[i]));
                i+=1;
            }
            else
            {
                ans += fun(s[i]);
            }
        }
        return ans;
        
    }
};