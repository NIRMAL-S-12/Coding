//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        // code here 
        if(N == 1)
        return "one";
        if(N == 2)
        return "two";
        if(N==3)
        return "three";
        if(N == 4)
        return "four";
        if(N==5)
        return "five";
        if(N == 6)
        return "six";
        if(N==7)
        return "seven";
        if(N== 8)
        return "eight";
        if(N==9)
        return "nine";
        if(N==10)
        return "ten";
        else
        return "not in range";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends