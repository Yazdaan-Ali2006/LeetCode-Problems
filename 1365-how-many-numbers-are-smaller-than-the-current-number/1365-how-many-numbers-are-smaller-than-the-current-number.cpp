class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int num;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            num = 0;

            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    continue;
                }

                if (nums[i] > nums[j])
                {
                    num++;
                }
            }

            v.push_back(num);
        }

        return v;
    }
};