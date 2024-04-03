#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int idx, vector<vector<bool>>& vis, string word) {
        if (idx == word.size() - 1) return true; // Check if the last character of the word is reached

        vis[i][j] = true; // Mark the current cell as visited

        int r = board.size(), c = board[0].size();

        // Check adjacent cells
        if (i - 1 >= 0 && !vis[i - 1][j] && board[i - 1][j] == word[idx + 1] && dfs(board, i - 1, j, idx + 1, vis, word))
            return true;
        if (i + 1 < r && !vis[i + 1][j] && board[i + 1][j] == word[idx + 1] && dfs(board, i + 1, j, idx + 1, vis, word))
            return true;
        if (j - 1 >= 0 && !vis[i][j - 1] && board[i][j - 1] == word[idx + 1] && dfs(board, i, j - 1, idx + 1, vis, word))
            return true;
        if (j + 1 < c && !vis[i][j + 1] && board[i][j + 1] == word[idx + 1] && dfs(board, i, j + 1, idx + 1, vis, word))
            return true;

        vis[i][j] = false; // Backtrack: Unmark the current cell
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false)); // Initialize vis array with false

        // Iterate through each cell on the board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0] && dfs(board, i, j, 0, vis, word)) // Start DFS from matching cell
                    return true; // If word is found, return true
            }
        }
        return false; // Word not found
    }
};
