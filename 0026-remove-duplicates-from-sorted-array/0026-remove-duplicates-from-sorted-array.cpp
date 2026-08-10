class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {

            if (!v.empty() && v.back() == nums[i]) {
                continue;
            } else {
                v.push_back(nums[i]);
            }
        }

        v.size();
        nums.clear();
        nums.resize(v.size());

        for (int i = 0; i < v.size(); i++) {
            nums[i] = v[i];
        }

        return v.size();
    }
};