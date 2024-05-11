class Solution {
public:
    int calculate(string s) 
    {
        int sum = 0 , last = 0 , cur = 0;
        char op = '+';
        for(int i = 0 ; i < s.size() ; i++)
        {
            char ch = s[i];
            if(isdigit(ch))
            {
                cur = cur * 10 + (ch - '0');
            }
            if(!isdigit(ch) && ch != ' ' || i == s.size() - 1)
            {
                if(op == '+')
                {
                    sum += last;
                    last = cur;
                }
                else if(op == '-')
                {
                    sum += last;
                    last = -cur;
                }
                else if(op == '*')
                {
                    last *= cur;
                }
                else if(op == '/')
                {
                    last /= cur;
                }
                op = ch;
                cur = 0;
            }
        }
        sum += last;
        return sum;
        
    }
};