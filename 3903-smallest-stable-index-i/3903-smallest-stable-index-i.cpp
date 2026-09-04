class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (max < nums[i]) {
                max = nums[i];
            }
            int min = nums[i];
            for (int j = i; j < nums.size(); j++) {
                if (min > nums[j]) {
                    min = nums[j];
                }
            }
            if (max - min <= k) {
                return i;
            }
        }
        return -1;
    }
};