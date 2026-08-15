class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int found;

        for (int i = 0; i < nums.size(); i++) {
            found=0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    found++;
                }
            }

            if (found == 1) {
                sum += nums[i];
            }
        }

        return sum;
    }
};