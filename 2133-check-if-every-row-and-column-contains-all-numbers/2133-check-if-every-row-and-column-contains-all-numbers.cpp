class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        map<int, int>row[matrix.size()];
        map<int, int> col[matrix.size()];
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            for(int j = 0 ; j < matrix[i].size() ; j++)
            {
                int d = matrix[i][j];
                if(row[i][d]++ > 0 || col[j][d]++ > 0)
                    return false;
            }
        }
        return true;
    }
};