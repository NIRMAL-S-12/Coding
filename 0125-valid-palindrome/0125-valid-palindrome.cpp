class Solution {
public:
    bool isPalindrome(string s) 
    {
        string z = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            s[i] = tolower(s[i]);
            if(isalpha(s[i]) || isdigit(s[i]))
                z += s[i];
        }
        int left = 0 , right = z.size() - 1;
        cout<<z;
        while(left < right)
        {
            if(z[left] == z[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};