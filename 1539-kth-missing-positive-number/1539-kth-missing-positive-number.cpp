class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        vector<int> missing;

        int num = 1;

        while (missing.size() < k) {

            bool found = false;

            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == num) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                missing.push_back(num);
            }

            num++;
        }

        return missing[k - 1];
    }
};