class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> ans(code.size() , 0);
        if(k == 0)
        {
            for(int i = 0 ; i < code.size() ; i++)
                code[i] = 0;
            return code;
        }
        else if(k > 0)
        {
            for(int i = 0 ; i < code.size() ; i++)
            {
                for(int j = 1 ; j <= k ; j++)
                {
                    ans[i] += code[(i+j) % code.size()];
                }
            }
            return ans;
        }
        else
        {
            for(int i = 0 ; i < code.size() ; i++)
            {
                for(int j = 1 ; j <= -k ; j++)
                {
                    ans[i] += code[(i-j+code.size()) % code.size()]; 
                }
            }
            return ans;
        }
        return {0};
        
        
    }
};