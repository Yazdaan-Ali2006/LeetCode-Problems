class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.size() == 0) {
            return nums;
        }
        sort(nums.begin(), nums.end());
        vector<int> v;
        vector<int> res;
        int min = nums[0];
        int max = nums[nums.size() - 1];
        for (int j = min; j <= max; j++) {
            v.push_back(j);
        }
        int i = 0;
        int j = 0;
        while (i < nums.size() && j<v.size()) {
            if(nums[i]==v[j]){
                i++;
                j++;

            }
            else{
                res.push_back(v[j]);
                j++;
            }
        }

        return res;
    }
};