class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix.size(); j++) {
                /*we are doing swapping to keep the record of orginal data 
                  otherwise we would lost it*/
            
                swap(matrix[j][i], matrix[i][j]);
            }
        }
        for (int k = 0; k < matrix.size(); k++) {

            /*Built in function to reverse the transposed matr*/
            reverse(matrix[k].begin(), matrix[k].end());
        }
    }
};