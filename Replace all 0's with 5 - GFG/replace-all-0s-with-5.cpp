//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    string s = to_string(n);
    int sum = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '0')
        s[i] = '5';
        sum = sum * 10 + (s[i] - '0');
    }
    return sum;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends