//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[])
    {
        // code here
        
        sort(arr, arr + N);
        if(N == 1)
        {
            return arr[0];
        }
        if(arr[0] != arr[1])
        {
            return arr[0];
        }
        int i ;
        for(i = 0 ; i < N - 2 ; i++)
        {
            if(arr[i] != arr[i+1] && arr[i+1] != arr[i+2])
            return arr[i+1];
        }
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1])
        {
            return arr[i];
        }
        else if(arr[i + 1] != arr[i] && arr[i+1] != arr[i+2])
        {
            return arr[i+1];
        }
        else
        {
            return arr[N-1];
        }
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends