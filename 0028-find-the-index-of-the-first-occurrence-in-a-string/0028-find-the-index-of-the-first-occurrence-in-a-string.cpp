class Solution {
public:
    int strStr(string haystack, string needle) {

        char ch = needle[0];

        for (int i = 0; i < haystack.size(); i++) {

            if (haystack[i] == ch) {

                if (haystack.substr(i, needle.size()) == needle) {
                    return i;
                }

            }
        }

        return -1;
    }
};