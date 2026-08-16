class Solution { 
public: 
    int repeatedNTimes(vector<int>& nums) { 
        int number = nums.size() / 2; 
        int count; 

        for (int i = 0; i < nums.size(); i++) { 
            count = 0; 

            for (int j = 0; j < nums.size(); j++) { 
                if (nums[i] == nums[j]) { 
                    count++; 
                } 

                if (count == number) { 
                    return nums[i]; 
                } 
            } 
        } 
        return -1;
    } 
};