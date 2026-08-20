class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
             if(!res.empty() && res.back()==nums[i]){
                continue;
            }
            if(nums[i]==nums[i+1])
            {
                  res.push_back(nums[i]);
            }
           
            
        }
        return res;
    }
};