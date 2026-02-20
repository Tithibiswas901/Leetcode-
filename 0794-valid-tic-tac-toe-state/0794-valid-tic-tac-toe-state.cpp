class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
         int countX = 0, countO = 0;

       
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == 'X')
                    countX++;
                else if(board[i][j] == 'O')
                    countO++;
            }
        }

        
        if(countO > countX || countX - countO > 1)
            return false;

       
        bool xWin = win(board, 'X');

       
        bool oWin = win(board, 'O');

      
        if(xWin && oWin)
            return false;

        
        if(xWin && countX != countO + 1)
            return false;

        
        if(oWin && countX != countO)
            return false;

        return true;
    }

    
    bool win(vector<string>& board, char player) {

        for(int i = 0; i < 3; i++)
            if(board[i][0] == player &&
               board[i][1] == player &&
               board[i][2] == player)
                return true;

       
        for(int i = 0; i < 3; i++)
            if(board[0][i] == player &&
               board[1][i] == player &&
               board[2][i] == player)
                return true;

      
        if(board[0][0] == player &&
           board[1][1] == player &&
           board[2][2] == player)
            return true;

        if(board[0][2] == player &&
           board[1][1] == player &&
           board[2][0] == player)
            return true;

        return false;
    }
};