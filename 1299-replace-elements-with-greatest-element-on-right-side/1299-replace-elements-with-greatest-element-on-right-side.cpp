class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int max = -1;
        vector<int> ans;
        for(int i = arr.size() - 1 ; i > 0 ; i--)
        {
            if(arr[i] > max)
                max = arr[i];
            ans.push_back(max);
        }
        reverse(ans.begin() , ans.end());
        ans.push_back(-1);
        return ans;
    }
};