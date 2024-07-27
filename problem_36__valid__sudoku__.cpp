class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            set <char> validRow;
            for (int j = 0; j < 9; j++) {
                char curElem = board[i][j];
                if (curElem == '.') {
                    continue;
                } else if (validRow.find(curElem) == validRow.end()) {
                    validRow.insert(curElem);
                } else {
                    return false;
                }
            }
        }

        for (int i = 0; i < 9; i++) {
            set <char> validColumn;
            for (int j = 0; j < 9; j++) {
                char curElem = board[j][i];
                if (curElem == '.') {
                    continue;
                } else if (validColumn.find(curElem) == validColumn.end()) {
                    validColumn.insert(curElem);
                } else {
                    return false;
                }
            }
        }

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j+= 3) {
                set <char> validBox; {
                    for (int boxI = i; boxI < i + 3; boxI++) {
                        for (int boxJ = j; boxJ < j + 3; boxJ++) {
                            char curElem = board[boxI][boxJ];
                            if (curElem == '.') {
                                continue;
                            } else if (validBox.find(curElem) == validBox.end()) {
                                validBox.insert(curElem);
                            } else {
                                return false;
                            }
                        }
                    }
                }
            }
        }



        return true;
    }
};