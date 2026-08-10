class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int high = size - 1;
        int low = 0;
        int mid;

        while (low <= high) {
            mid = (high + low) / 2;

            if (nums[mid] == target) {
            
                return mid;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            }
        }

        return low;
        return 0;
    }
};