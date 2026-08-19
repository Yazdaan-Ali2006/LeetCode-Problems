class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                int x = even.back();
                even.pop_back();
                result.push_back(x);
            } else {
                int y = odd.back();
                odd.pop_back();
                result.push_back(y);
            }
        }
        return result;
    }
};