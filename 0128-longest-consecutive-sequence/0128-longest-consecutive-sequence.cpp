class Solution {
public:
    int next(int num) { return num + 1; }
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        int max = count;
        for (int i = 0; i < nums.size() - 1; i++) {
            
            if (nums[i + 1] == next(nums[i])) {
                count++;
                if (max < count) {
                    max = count;
                }
            } else if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                count = 1;
            }
        }
        return max;
    }
};