class Solution {
public:
    string reverseWords(string s) {
        int startrev=0;
        for(int i=0;i<=s.size();i++){
            if(i==s.size()|| s[i]==' '){
                reverse(s.begin() + startrev, s.begin() + i);
            startrev=i+1;
            }
            
        }
        return s;
    }
};