class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        vector<int> v1;

        if (s1 == s2) {
            return true;
        }

        for (int i = 0; i < s1.size(); i++) {

            if (s1[i] != s2[i]) {
                v1.push_back(i);
            }
        }

        if (v1.size() != 2) {
            return false;
        }

        swap(s2[v1[0]], s2[v1[1]]);

        if (s1 == s2) {
            return true;
        }

        return false;
    }
};