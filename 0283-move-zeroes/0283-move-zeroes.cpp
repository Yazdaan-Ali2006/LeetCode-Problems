class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==0){
               count++;
                nums.erase(nums.begin() + i);
            }
            else{
                i++;
            }
             
        }
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }

    }
};