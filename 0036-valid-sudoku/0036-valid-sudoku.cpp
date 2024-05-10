class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<char,int>row[9];
        unordered_map<char,int>col[9];
        unordered_map<char,int>box[9];
        
        for(int i = 0 ; i < board.size() ; i++)
        {
            for(int j = 0 ; j < board[0].size() ; j++)
            {
                char ch = board[i][j];
                if(ch != '.' && (row[i][ch]++ > 0 || col[j][ch]++ > 0 || box[i/3*3+j/3][ch]++ > 0))
                    return false;
            }
        }
        return true;
    }
};