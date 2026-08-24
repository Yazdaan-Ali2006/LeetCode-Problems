class Solution {
public:
    int getgcd(int a, int b) {
        //Euclide
        int rem;
        while (b != 0) {
            rem = a % b;
            a=b;
            b=rem;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        return getgcd(min, max);
    }
};