class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // First condition: row valid check
        for (int y = 0; y < 9; y++) {
            std::unordered_set<int> rowCheck;
            for (int x = 0; x < 9; x++) {
                if (board[y][x] == '.') continue;
                if (rowCheck.count(board[y][x])) {
                    return false;
                } else {
                    rowCheck.insert(board[y][x]);
                }
            }
        }

        // Second condition: column valid check
        for (int x = 0; x < 9; x++) {
            std::unordered_set<int> columnCheck;
            for (int y = 0; y < 9; y++) {
                if (board[y][x] == '.') continue;
                if (columnCheck.count(board[y][x])) {
                    return false;
                } else {
                    columnCheck.insert(board[y][x]);
                }
            }
        }
        
        // Third condition: sub-box valid check
        for (int y = 0; y < 9; y += 3) { // 0, 3, 6
            for (int x = 0; x < 9; x += 3) {
                
                std::unordered_set<int> boxCheck;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (board[y+i][x+j] == '.') continue;
                        if (boxCheck.count(board[y+i][x+j])) {
                            return false;
                        } else {
                            boxCheck.insert(board[y+i][x+j]);
                        }
                    }
                }
            }
        }
        return true;
    }
};
