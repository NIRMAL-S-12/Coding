class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans = 0;
        int i = 0 , j = height.size() - 1;
        while(i < j)
        {
            int n = min(height[i],height[j]);
            int a = j - i;
            a = n * a;
            if(a >= ans)
                ans = a ;
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return ans;
        
    }
};