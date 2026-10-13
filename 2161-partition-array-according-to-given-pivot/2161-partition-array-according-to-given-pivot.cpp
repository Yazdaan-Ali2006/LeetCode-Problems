class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                res.push_back(nums[i]);
            }
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == pivot) {
                res.push_back(nums[j]);
            }
        }
        for (int k = 0; k < nums.size(); k++) {
            if (nums[k] > pivot) {
                res.push_back(nums[k]);
            }
        }
        return res;
    }
};