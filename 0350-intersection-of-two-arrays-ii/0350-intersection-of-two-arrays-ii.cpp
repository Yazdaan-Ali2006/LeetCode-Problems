class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            for (int k = 0; k < nums2.size(); k++) {
                if (nums2[k] > -1) {
                    if (nums1[i] == nums2[k]) {
                        result.push_back(nums1[i]);

                        if (nums2[k] == 0)
                            nums2[k] = -1;
                        else
                            nums2[k] = -nums2[k];

                        break;
                    }
                }
            }
        }
        return result;
    }
};