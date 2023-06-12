class Solution {
public:
    int max(int a, int b)
    {
        return a > b ? a : b;
    }
    int countGoodRectangles(vector<vector<int>>& r) 
    {
        int ans = 0;
        long long int max_length = 0, max_breadth = 0;
        for(int i = 0 ; i < r.size() ; i++)
        {
            if(r[i][0] < r[i][1])
                r[i][1] = r[i][0];
            else
                r[i][0] = r[i][1];
            max_length = max(max_length, r[i][0]);
            max_breadth = max(max_breadth , r[i][1]);
            
        }
        for(int i = 0 ; i < r.size() ; i++)
        {
            if(r[i][0] == max_length && r[i][1] == max_breadth)
                ans++;
        }
        return ans;
        
    }
};