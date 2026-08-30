class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int max = count;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;

                if (max < count) {
                    max = count;
                }
            }
            else {
                count = 1;
            }
        }

        return max;
    }
};