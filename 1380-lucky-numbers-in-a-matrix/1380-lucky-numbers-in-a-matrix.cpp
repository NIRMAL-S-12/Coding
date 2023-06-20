class Solution {
public:
    
    int fun(int ii, int jj, int ele, vector<vector<int>>& matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0 ; i < col ; i++)
        {
            if(ele > matrix[ii][i])
                return 0;
        }
        for(int i = 0 ; i < row ; i++)
        {
            if(ele < matrix[i][jj])
                return 0;
        }
        return 1;
        
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> ans;
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                if(fun(i,j,matrix[i][j],matrix))
                {
                    ans.push_back(matrix[i][j]);   
                }
            }
        }
        return ans;
        
    }
};