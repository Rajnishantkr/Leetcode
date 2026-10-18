class Solution {
public:
    bool check(int i,int j,int idx,string& word,vector<vector<char>>& board){
         if(idx == word.size())
           return true;

        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[idx])
         return false;
         
        board[i][j] = '.';

        bool res = check(i + 1, j, idx + 1, word, board) || 
        check(i - 1, j, idx + 1, word, board) ||
        check(i, j + 1, idx + 1, word, board) ||
        check(i, j - 1, idx + 1, word, board);

        board[i][j] = word[idx];
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<char> ans;
        int m = board.size();
        int n = board[0].size();
         
        for(int i=0; i<m; i++)
        {
        for(int j=0; j<n; j++){
            if(check(i,j,0, word, board)){
                return true;
            }
          }
        }
        return false;
    }
};