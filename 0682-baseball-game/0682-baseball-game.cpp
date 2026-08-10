class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                score.pop_back();
            }

            else if (operations[i] == "D") {
                int element = 0;
                element = 2 * score.back();
                score.push_back(element);
            }
             else if (operations[i] == "+") {
                int sum = score[score.size() - 1] + score[score.size() - 2];
                score.push_back(sum);
            } else {

                score.push_back(stoi(operations[i]));
            }

        }
        int total=0;
        for(int i=0;i<score.size();i++){
            total+=score[i];
        }
        return total;
        
    }
};
