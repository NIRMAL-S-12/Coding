class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        map<char, int> row[9], col[9], sub[9];
        for(int i = 0 ; i < board.size() ; i++)
        {
            for(int j = 0 ; j < board[i].size() ; j++)
            {
                char ch = board[i][j];
                if(ch != '.' && (row[i][ch]++ > 0 || col[j][ch]++ > 0 || sub[i/3*3 + j/3][ch]++ > 0))
                    return false;
            }
            
        }
        return true;
        
    }
};