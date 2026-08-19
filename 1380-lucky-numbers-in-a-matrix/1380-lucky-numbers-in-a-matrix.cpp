class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> result;

        for (int i = 0; i < matrix.size(); i++) {

            int min = matrix[i][0];
            int minindex = 0;

            for (int j = 1; j < matrix[i].size(); j++) {
                if (min > matrix[i][j]) {
                    min = matrix[i][j];
                    minindex = j;
                }
            }

            bool lucky = true;

            for (int k = 0; k < matrix.size(); k++) {
                if (matrix[k][minindex] > min) {
                    lucky = false;
                    break;
                }
            }

            if (lucky) {
                result.push_back(min);
            }
        }

        return result;
    }
};