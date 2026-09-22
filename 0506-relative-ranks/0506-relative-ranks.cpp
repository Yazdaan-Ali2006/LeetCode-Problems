class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res(score.size());

        for (int rank = 1; rank <= score.size(); rank++) {
           //FIND MAX
            int maximum = *max_element(score.begin(), score.end());
           //FIND THE INDEX OF THAT MAX

            int index = find(score.begin(), score.end(), maximum) - score.begin();

            if (rank == 1) {
                res[index] = "Gold Medal";
            }
            else if (rank == 2) {
                res[index] = "Silver Medal";
            }
            else if (rank == 3) {
                res[index] = "Bronze Medal";
            }
            else {
                res[index] = to_string(rank);
            }

            score[index] = -1; //Ignoring the previuos MAX
        }

        return res;
    }
};