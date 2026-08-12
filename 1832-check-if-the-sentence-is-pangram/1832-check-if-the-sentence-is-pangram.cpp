class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count[26]={};
        for(int i=0;i<sentence.size();i++){
             int index=sentence[i]-'a'; //for getting index which we want to increase by 1
            count[index]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]==0){
                return false;
            }
        }
        return true;
        
    }
};