class Solution {
public:
    bool checkAllRows(vector<vector<char>>& board){
        int m = board.size();
        int n = board[0].size();

        for(int i = 0 ; i < m ; i++){
            vector<bool>digits(9,false);
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == '.')continue;
                else{
                    if(digits[board[i][j]-'0'-1]){
                        return false;
                    }
                    digits[board[i][j]-'0'-1] = true;
                }
            }
        }
        return true;
    }
    bool checkAllColumns(vector<vector<char>>& board){
        int m = board.size();
        int n = board[0].size();

        for(int i = 0 ; i < n ; i++){
            vector<bool>digits(9,false);
            for(int j = 0 ; j < m ; j++){
                if(board[j][i] == '.')continue;
                else{
                    if(digits[board[j][i]-'0'-1]){
                        return false;
                    }
                    digits[board[j][i]-'0'-1] = true;
                }
            }
        }
        return true;
    }
    bool check3x3Boxes(vector<vector<char>>& board){
        int m = board.size();
        int n = board[0].size();

        vector<int>index = {0, 3, 6};
        for(auto i : index){
            for(auto j : index){
                vector<bool>digits(9,false);
                for(int p = i; p < i + 3; p++){
                    for(int q = j; q < j + 3; q++){
                        if(board[p][q] == '.')continue;
                        else{
                            if(digits[board[p][q]-'0'-1]){
                                return false;
                            }
                            digits[board[p][q]-'0'-1] = true;
                        }
                    }
                }

            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = checkAllRows(board) & checkAllColumns(board) & check3x3Boxes(board);
        return ans;
    }
};