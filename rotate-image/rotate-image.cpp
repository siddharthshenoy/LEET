class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len=matrix.size();
        vector<vector<int>> matrixB;
        matrixB=matrix;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                matrixB[j][len-i-1]=matrix[i][j];
            }
        }
        matrix=matrixB;  
    }     
};