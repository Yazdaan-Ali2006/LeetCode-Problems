class Solution {
public:
    string sortSentence(string s) {
        vector<string> res(9); //size because of arrangement
        string word;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int position = word.back() - '0';
                word.pop_back();
                res[position - 1] = word;
                word = ""; // reset
            }
            else {
                word += s[i];
            }
        }

        string final = "";

        for (int i = 0; i < res.size(); i++) {
            if (res[i] != "") {
                if (final != "") {
                    final += " "; // space
                }
                final += res[i];
            }
        }

        return final;
    }
};