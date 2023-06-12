class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) 
    {
        int ans = 0;    
        int mat[m][n];
        memset(mat, 0, sizeof(mat));
        for(int i = 0 ; i < indices.size() ; i++)
        {
            int row = indices[i][0];
            int col = indices[i][1];
            for(int j = 0 ; j < m ; j++)
            {
                mat[j][col] += 1;
            }
            for(int k = 0 ; k < n ; k++)
            {
                mat[row][k] += 1;
            }
        }
        for(int j = 0 ; j < m ; j++)
            {
                for(int k = 0 ; k < n ; k++)
                {
                    if(mat[j][k] % 2 != 0)
                        ans++;
                }
            cout<<endl;
            }
        return ans;
        
    }
};