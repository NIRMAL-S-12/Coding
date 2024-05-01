class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
        int j = colors.size() - 1;
        int max1 = 0;
        for(int i = 0 ; i < colors.size() -1 ; i++)
        {
            if(colors[i] != colors[j])
            {
                max1 = abs(i - j);
                break;
            }
        }
        
        int m = 0 ;
        int max2 = 0;
        for(int i = colors.size() - 1 ; i >= 0 ; i--)
        {
            if(colors[m] != colors[i])
            {
                max2 = abs(m - i);
                break;
            }
        }
        return max(max1,max2);
        
    }
};