class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> res;

        for (int i = 0; i < matrix.size(); i++)
        {
            int min = matrix[i][0];
            int minimumindex=0;
            for (int j = 0; j < matrix[i].size(); j++)
            {

                if (min > matrix[i][j])
                {
                    min = matrix[i][j];
                    minimumindex=j;

                }
            }
             int max=matrix[0][minimumindex];
            for (int j = 0; j < matrix.size(); j++)
            {

                if (max < matrix[j][minimumindex])
                {
                    max = matrix[j][minimumindex];
                }
            }
            if(max==min){
                res.push_back(max);
            }
        }
        return res;
    }
};