class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m,vector<int>(n,0));
        int count=0;
        for (int i = 0; i < indices.size(); i++) {

            int row = indices[i][0];
            int col = indices[i][1];

            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j]++;
            }

            // selected column
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][col]++;
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};