class Solution {
public:
    bool checkWordExist(vector<vector<char>>&board,int i, int j,string &word,int pos) {
        if(pos == word.size()) {
            return true;
        }
        
        // out of bound logic && invalid cell logic
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[pos]) {
            return false;
        }
        
        // mark visited as same letter may not be used more than once
        board[i][j] = '.';
        
        // backtrack logic
        bool res = checkWordExist(board,i-1,j,word,pos+1)
                 || checkWordExist(board,i+1,j,word,pos+1)
                 || checkWordExist(board,i,j-1,word,pos+1)
                 || checkWordExist(board,i,j+1,word,pos+1);
        
        //reset
        board[i][j] = word[pos];
        
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        // base case
        if(board.size() == 0|| word.empty()) {
            return false;
        }
        
        // 0 length word is always presen            
        if( word.size() == 0) {
            return true;
        }
        
        // this question can be solved using backtracking approach
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++) {
                // if board[i][j] != word[0] this cell cannot be used as a starting point
                if(board[i][j] == word[0]) {
                    if(checkWordExist(board,i,j, word,0) == true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};