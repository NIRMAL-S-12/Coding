//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int isvow(char ch)
    {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
        string modify (string s)
        {
            //code here.
            string vow = "";
            for(char i : s)
            {
                if(isvow(i))
                vow+=i;
            }
            int k = vow.size() - 1;
            string ans = "";
            for(int i = 0 ; i < s.size() ; i++)
            {
                if(isvow(s[i]))
                {
                    ans += vow[k--];
                }
                else
                {
                    ans += s[i];
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends