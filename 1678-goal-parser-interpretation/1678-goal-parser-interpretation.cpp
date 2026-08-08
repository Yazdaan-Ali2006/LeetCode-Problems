class Solution {
public:
    string interpret(string command) {
        string res;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                res+='G';
            }
            if (command.compare(i, 2, "()") == 0) {
                  res+= 'o';
            }
            if (command.compare(i, 4, "(al)") == 0) {
                res+='a';
                res+='l';
            }
        }
        return res;
    }
};