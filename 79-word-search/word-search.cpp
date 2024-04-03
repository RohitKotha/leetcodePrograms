class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int idx, vector<vector<bool>> &vis, string word) {
        if(idx == word.size()-1) return true;
        vis[i][j] = true;
        int r = board.size(), c = board[0].size();
        if(i - 1 >= 0 && !vis[i - 1][j] && board[i - 1][j] == word[idx + 1] && dfs(board, i - 1, j, idx + 1, vis, word))
         return true;
        if(i + 1 <= r - 1 && !vis[i + 1][j] && board[i + 1][j] == word[idx + 1] && dfs(board, i + 1, j, idx + 1, vis, word)) 
        return true;
        if(j - 1 >= 0 && !vis[i][j - 1] && board[i][j - 1] == word[idx + 1] && dfs(board, i, j - 1, idx + 1, vis, word))
         return true;
        if(j + 1 <= c - 1 && !vis[i][j + 1] && board[i][j + 1] == word[idx + 1] && dfs(board, i, j + 1, idx + 1, vis, word)) 
        return true;
        vis[i][j] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == word[0] && dfs(board, i, j, 0, vis, word)) return true;
            }
        }
        return false;
    }
};