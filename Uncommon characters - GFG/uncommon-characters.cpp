//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string s = "";
            int f1[128] = {0};
            int f2[128] = {0};
            for(int i = 0 ; i < A.size() ; i++)
            {
                f1[A[i]]++;
            }
            for(int i = 0 ; i < B.size() ; i++)
            {
                f2[B[i]]++;
            }
            for(char ch = 'a' ; ch <= 'z' ; ch++)
            {
                if(f1[ch] == 0 && f2[ch] != 0 || f2[ch] == 0 && f1[ch] != 0)
                s += ch;
            }
            if(s == "")
            return "-1";
            return s;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends