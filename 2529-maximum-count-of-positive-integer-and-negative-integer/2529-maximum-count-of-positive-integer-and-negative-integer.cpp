class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countpos = 0;
        int countneg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                countpos++;
            }
            if (nums[i] < 0) {

                countneg++;
            }

        }
        if(countneg>countpos || countneg==countpos){
            return countneg;
        }
        else{
            return countpos;
        }
    }
};