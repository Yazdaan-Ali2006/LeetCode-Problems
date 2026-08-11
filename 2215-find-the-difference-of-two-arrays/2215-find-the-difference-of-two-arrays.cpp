class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> v(2);
        vector<int> Nums1;
        vector<int> Nums2;
        for (int i = 0; i < nums1.size(); i++) {

            bool found = false;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            bool already = false;

            for (int k = 0; k < Nums1.size(); k++) {
                if (Nums1[k] == nums1[i]) {
                    already = true;
                    break;
                }
            }

            if (!found && !already) {
                Nums1.push_back(nums1[i]);
            }
        }

        for (int i = 0; i < nums2.size(); i++) {

            bool found = false;

            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j]) {
                    found = true;
                    break;
                }
            }

            bool already = false;

            for (int k = 0; k < Nums2.size(); k++) {
                if (Nums2[k] == nums2[i]) {
                    already = true;
                    break;
                }
            }

            if (!found && !already) {
                Nums2.push_back(nums2[i]);
            }
        }

        v[0] = Nums1;
        v[1] = Nums2;

        return v;
    }
};