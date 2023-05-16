//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) 
{
    // Your code here
    string s = to_string(n);
    int l = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '0')
        s[i] = '5';
        l = l * 10 + (s[i] - '0');
    }
    return l;
}