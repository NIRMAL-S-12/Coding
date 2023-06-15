class Solution {
public:
    string generateTheString(int n) 
    {
        int a,b , c = 0;
        string ans = "";
        if(n % 2 == 0)
        {
            ans += 'a';
            for(int i = 1 ; i < n ; i++)
                ans += 'b';
        }
        else
        {
            for(int i = 1 ; i <= n ; i++)
                ans += 'a';
        }
        return ans;
    }
};