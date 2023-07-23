//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int freq1[128] = {0};
        int freq2[128] = {0};
        for(int i = 0 ; i < a.size() ; i++)
        {
            freq1[a[i]]++;
        }
        for(int i = 0 ; i < b.size() ; i++)
        {
            freq2[b[i]]++;
        }
        for(char ch = 'a' ; ch <= 'z' ; ch++)
        {
            if(freq1[ch] != freq2[ch])
            return false;
        }
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends