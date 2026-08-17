class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // THE ELEMENT WHICH APPEARS MORE THAN (n/2) TIMES IS MAJORITY ELEMENT

        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};