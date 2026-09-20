class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board[0].size();
        for(int i=0;i<n;i++){
            unordered_set<int>stt;
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')continue;
                if(stt.find(board[i][j])!=stt.end())return false;
                stt.insert(board[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            unordered_set<int>stt;
            for(int j=0;j<n;j++){
                if(board[j][i]=='.')continue;
                if(stt.find(board[j][i])!=stt.end())return false;
                stt.insert(board[j][i]);
            }
        }
        map<pair<int,int>,unordered_set<char>>mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')continue;
                pair<int,int>box={i/3,j/3};
                if(mpp[box].find(board[i][j])!=mpp[box].end())return false;
                mpp[box].insert(board[i][j]);
            }
        }
        return true;
    }
};
