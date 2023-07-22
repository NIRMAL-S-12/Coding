//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        vector<char> stack;
        int top = 0;
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(x[i] == '(' || x[i] == '[' || x[i] == '{')
            {
                stack.push_back(x[i]);
                top++;
            }
            else
            {
                if(stack.size() != 0)
                {
                if(x[i] == ')' && stack[top - 1] == '(' || x[i] == '}' && stack[top - 1] == '{' || x[i] == ']' && stack[top - 1] == '[')
                {
                    if(stack.size() == 0)
                    return false;
                    stack.pop_back();
                    top--;
                }
                else
                return false;
                }
                else
                return false;
            }
        }
        if(stack.size() == 0)
        return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends