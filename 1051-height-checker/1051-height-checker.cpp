class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights2;
        int index=0;
        for (int i = 0; i < heights.size(); i++) {
            heights2.push_back(heights[i]);
        }
        sort(heights2.begin(),heights2.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=heights2[i]){
                index+=1;
            }
        }
        return index;
    }

};