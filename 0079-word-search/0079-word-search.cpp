class Solution {
    bool find(int i, int j, int ind, vector<vector<char>>& board, string word,
              vector<vector<bool>>& visited) {
        if (ind == word.size()) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() ||
            visited[i][j] || board[i][j] != word[ind])
            return false;
        visited[i][j] = true;
        bool ans = find(i + 1, j, ind + 1, board, word, visited) ||
                   find(i, j + 1, ind + 1, board, word, visited) ||
                   find(i - 1, j, ind + 1, board, word, visited) ||
                   find(i, j - 1, ind + 1, board, word, visited);
        visited[i][j] = false;
        return ans;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        bool ans = false;
        vector<vector<bool>> visited(board.size(),
                                     vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0] &&
                    find(i, j, 0, board, word, visited))
                    return true;
            }
        }
        return ans;
    }
};