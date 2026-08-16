class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end()); //sorting is redundant so i used its function
        vector<int>indexes;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                 indexes.push_back(i);
            }
        }
          return indexes;
    }
};