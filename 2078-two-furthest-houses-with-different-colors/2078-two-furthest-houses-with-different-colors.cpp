class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
        int max = 0;
        for(int i = 0 ; i < colors.size() - 1 ; i++)
        {
            for(int j = i + 1 ; j < colors.size() ; j++)
            {
                if(colors[i] != colors[j])
                {
                    int a = abs(i - j);
                    if(a > max)
                        max = a;
                }
            }
        }
        return max;
        
    }
};