//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string ans = "";
        string temp = "";
        for(int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if(s[i] == '.')
            {
                reverse(temp.rbegin() , temp.rend());
                ans += temp;
                ans += '.';
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        temp = "";
        for(int i = 0 ; i < s.size() + 1 ; i++)
        {
            if(s[i] == '.' || s[i] == '\0')
            {
                //reverse(temp.rbegin(), temp.rend());
                ans += temp;
                break;
            }
            else
            {
                temp += s[i];
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends