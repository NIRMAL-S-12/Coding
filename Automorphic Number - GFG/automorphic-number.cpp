//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    long long int a = n * n;
		    string s = to_string(a);
		    string w = to_string(n);
		    int m = 1;
		    for(int i = 1 ; i <= w.size() ; i++)
		    m *= 10;
		    int b = a % m;
		    if(b == n)
		    return "Automorphic";
		    return "Not Automorphic";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends