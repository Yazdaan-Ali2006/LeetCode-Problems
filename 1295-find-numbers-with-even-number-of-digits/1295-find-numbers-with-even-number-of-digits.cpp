class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp;
        int num_of_found=0;
    
        for(int i=0;i<nums.size();i++){
             temp=nums[i];
             int count=0;
            while(temp!=0){
               temp=temp/10;
               count++;
            }
            if(count%2==0){
                num_of_found++;


            }
        }
        return num_of_found;
    }
};