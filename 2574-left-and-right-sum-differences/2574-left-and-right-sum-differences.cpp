
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);

        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = 0;

            for (int j = 0; j < i; j++) {
                left += nums[j];
            }

            for (int k = i + 1; k < n; k++) {
                right += nums[k];
            }

            res[i] = abs(left - right);
        }

        return res;
    }
};
