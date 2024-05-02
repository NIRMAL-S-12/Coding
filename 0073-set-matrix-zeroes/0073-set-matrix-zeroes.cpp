class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        bool m[row][col];
        for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            m[i][j] = false;
        }
    }
        for(int i = 0 ; i < row; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                if(matrix[i][j] == 0 && m[i][j] == false)
                {
                    for(int k = 0 ; k < row ; k++)
                    {
                        if(matrix[k][j] == 0 && m[k][j] == false)
                            continue;
                        else
                        {
                            matrix[k][j] = 0;
                            m[k][j] = true;
                        }
                    }
                    for(int l = 0 ; l < col ; l++)
                    {
                        if(matrix[i][l] == 0 && m[i][l] == false)
                            continue;
                        else
                        {
                            matrix[i][l] = 0;
                            m[i][l] = true;
                        }
                    }
                }
            }
        }
        
    }
};