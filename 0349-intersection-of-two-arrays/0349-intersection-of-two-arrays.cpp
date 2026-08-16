class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int found;
        for (int i = 0; i < nums1.size(); i++) {
            found = 0;
            for (int j = 0; j < result.size(); j++) {
                if (result[j] == nums1[i]) {
                    found++;
                    break;
                }
            }
            if (found == 1) {
                continue;
            }
            for (int k = 0; k < nums2.size(); k++) {
                if (nums1[i] == nums2[k]) {
                    result.push_back(nums1[i]);
                    break;
                }
            }
        }
        return result;
    }
};