//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int s = 0;
        while(N)
        {
            s += N % 10;
            N /= 10;
        }
        string t = to_string(s);
        string h = string(t.rbegin(), t.rend());
        return t == h;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends