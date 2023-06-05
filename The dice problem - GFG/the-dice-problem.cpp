//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int n)
    {
        // Write Your Code here
        if(n == 6)
        return 1;
        if(n == 5)
        return 2;
        if(n == 1)
        return 6;
        if(n == 2)
        return 5;
        if(n == 4)
        return 3;
        if(n == 3)
        return 4;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.oppositeFaceOfDice(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends