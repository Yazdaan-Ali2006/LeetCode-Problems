class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumright = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); i++) {

            int pivot = nums[i];
            int sumleft = 0;

            for (int j = nums.size() - 1; j >= i + 1; j--) {
                sumleft += nums[j];
            }

            if (sumright == sumleft) {
                return i;
            }

            sumright += pivot;
        }

        return -1;
    }
};