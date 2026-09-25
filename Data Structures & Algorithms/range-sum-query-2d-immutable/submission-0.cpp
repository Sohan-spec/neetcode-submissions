class NumMatrix {
public:
    vector<vector<int>>vec;
    NumMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=(matrix.empty()?0:matrix[0].size());
        vec=vector<vector<int>>(rows,vector<int>(cols+1,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                vec[i][j+1]=vec[i][j]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++){
            sum+=vec[i][col2+1]-vec[i][col1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */