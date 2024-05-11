class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) 
    {
        int count = 0;
        char board[3][3];
        
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                board[i][j] = ' ';
            }
        }
        
        for(int i = 0 ; i < moves.size() ; i++)
        {
            if(count % 2 == 0)
                board[moves[i][0]][moves[i][1]] = 'X';
            else
                board[moves[i][0]][moves[i][1]] = 'O';
            count++;
        }
        
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                cout<<board[i][j]<<"    ";
            }
            cout<<endl;
        }
        for(int i = 0 ; i < 3 ; i++)
        {
            int xcheck = 0 , ocheck = 0;
            for(int j = 0 ; j < 3 ; j++)
            {
                if(board[i][j] == 'X')
                    xcheck++;
                else if(board[i][j] == 'O')
                    ocheck++;
            }

            if(xcheck == 3 && ocheck == 0)
                return "A";
            if(ocheck == 3 && xcheck == 0)
                return "B";
            xcheck = 0;
            ocheck = 0;
            for(int j = 0 ; j < 3 ; j++)
            {
                if(board[j][i] == 'X')
                    xcheck++;
                if(board[j][i] == 'O')
                    ocheck++;
            }
            
            if(xcheck == 3 && ocheck == 0)
                return "A";
            if(ocheck == 3 && xcheck == 0)
                return "B";
            xcheck = 0;
            ocheck = 0;
        }
        
        int xcheck = 0 , ocheck = 0;
        for(int i = 0 ; i < 3 ; i++)
        {
            if(board[i][i] == 'X')
                xcheck++;
            if(board[i][i] == 'O')
                ocheck++;
        }
        
            if(xcheck == 3 && ocheck == 0)
                return "A";
            if(ocheck == 3 && xcheck == 0)
                return "B";
            xcheck = 0;
            ocheck = 0;
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                if(i + j == 2)
                {
                    if(board[i][j] == 'X')
                        xcheck++;
                    if(board[i][j] == 'O')
                        ocheck++;
                }
            }
        }
        

        if(xcheck == 3 && ocheck == 0)
                return "A";
        if(ocheck == 3 && xcheck == 0)
                return "B";
            xcheck = 0;
            ocheck = 0;
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                if(board[i][j] == ' ')
                    return "Pending";
            }
        }
        return "Draw";
            
        
    }
};