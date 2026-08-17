class Solution {
public:
    int calculate_sum(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return   n+calculate_sum(n - 1) ;
    }
    int missingNumber(vector<int>& nums) {
        int sum = calculate_sum(nums.size());
        int nums_sum = 0;
        for (int i = 0 ; i < nums.size(); i++) {
            nums_sum += nums[i];
        }
        return sum-nums_sum;
    }
};