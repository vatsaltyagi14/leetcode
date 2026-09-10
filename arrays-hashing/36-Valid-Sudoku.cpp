class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            vector<int> freq(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                freq[board[i][j]-'1']++;
                if(freq[board[i][j]-'1']==2) return false;
            }
        }

        for(int i =0;i<9;i++){
            vector<int> freq(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i] == '.') continue;
                freq[board[j][i]-'1']++;
                if(freq[board[j][i]-'1']==2) return false;
            }
        }
        for(int i =0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                vector<int> freq(10,0);
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(board[k][l] == '.') continue;
                        freq[board[k][l]-'1']++;
                        if(freq[board[k][l]-'1']==2) return false;
                    }
                }
            }
        }
        return true;
    }
};