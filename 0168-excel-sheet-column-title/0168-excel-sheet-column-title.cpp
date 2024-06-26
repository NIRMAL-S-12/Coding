class Solution {
public:
    string convertToTitle(int n) 
    {
        string res ="";
        while(n)
        {
            n--;
            char ch = 'A' + n % 26;
            res = ch + res;
            n /= 26;
        }
        return res;
        
    }
};