//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fact(int n)
    {
        if(n <= 1)
        return 1;
        return n * fact(n-1);
    }
    int isPerfect(int N) {
        // code here
        int t = N, n = N;
        int sum = 0;
        while(n != 0)
        {
            int r = n % 10;
            sum += fact(r);
            n /= 10;
        }
        return sum == t;
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
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends