class Solution {
public:
    void sortColors(vector<int>& nums) {
        //3 ptr 
        int low=0;
        int current=0;
        int high=nums.size()-1;
        while(current<=high){
        
            if(nums[current]==0){
                swap(nums[low],nums[current]);
                low++;
                current++;
                }
            else if(nums[current]==1){
                current++;

            }
            else{
                swap(nums[current],nums[high]);
                high--;

                
            }


        }
        
    }
};