class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                for(int j=i+1;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                nums.pop_back();
                i--;
                //for the sake of checking same element;
            }
            
        }
        if (nums.size() >= 3)
        {
            return nums[(nums.size() - 1) - 2];
        } 
        
         else {
            return nums[nums.size() - 1];
        }
    }
    };